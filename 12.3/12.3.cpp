#include <fstream>
#include <iostream>
#include <map>
#include <memory>
#include <set>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

using line_no = vector<string>::size_type;

class QueryResult;

class TextQuery {
   public:
    TextQuery(ifstream&);
    QueryResult query(const string&) const;

   private:
    shared_ptr<vector<string>> file;  //  输入文件
    map<string, pair<shared_ptr<set<line_no>>, int>>
        wm;  // 每个单词到行号集合和出现次数的映射
};

class QueryResult {
   public:
    QueryResult(string w,
                shared_ptr<set<line_no>> l,
                shared_ptr<vector<string>> f,
                size_t c)
        : word(w), lines(l), file(f), count(c) {}

    string getWord() const { return word; }
    shared_ptr<set<line_no>> getLines() const { return lines; }
    shared_ptr<vector<string>> getFile() const { return file; }
    size_t getCount() const { return count; }

   private:
    string word;
    shared_ptr<set<line_no>> lines;
    shared_ptr<vector<string>> file;
    size_t count;
};

TextQuery::TextQuery(ifstream& ifs) : file(new vector<string>) {
    string text;

    while (getline(ifs, text)) {
        file->emplace_back(text);
        int lineNum = file->size();
        istringstream line(text);
        string word;

        while (line >> word) {
            auto& wordInfo = wm[word];

            if (!wordInfo.first) {
                wordInfo.first.reset(new set<line_no>);
                wordInfo.second = 0;
            }

            wordInfo.first->emplace(lineNum);
            ++wordInfo.second;
        }
    }
}

QueryResult TextQuery::query(const string& word) const {
    static shared_ptr<set<line_no>> noData(new set<line_no>);
    auto loc = wm.find(word);

    if (loc == wm.end()) {
        return QueryResult(word, noData, file, 0);
    } else {
        return QueryResult(word, loc->second.first, file, loc->second.second);
    }
}

void _12_3(string path, const string word) {
    ifstream ifs(path);
    TextQuery query(ifs);
    auto result = query.query(word);
    auto lines_ptr = result.getLines();
    auto file_ptr = result.getFile();
    auto count = result.getCount();

    cout << "单词\"" << word << "\"出现 " << count << " 次" << endl;

    for (const auto& elem : *lines_ptr) {
        cout << "\t"
             << "(line " << elem << ") " << (*file_ptr)[elem - 1] << endl;
    }
}

int main() {
    string path = "/home/yeluo/文档/C++/C_Plus_Plus_Primer/12.3/text";

    _12_3(path, "she");

    return 0;
}