#include <fstream>
#include <iostream>
#include <sstream>
#include <unordered_map>
using namespace std;

class _11_33 {
   private:
    unordered_map<string, string> buildMap(ifstream& ifs) {
        string key, value;
        unordered_map<string, string> result;

        while (ifs >> key) {
            getline(ifs, value);
            auto leftNotSpace =
                value.find_first_not_of(" ");  // 左边第一个不为空格的

            if (leftNotSpace == string::npos) {
                throw runtime_error("词汇 " + key + " 对应的规则为空！");
            } else {
                // 去除空格
                value.erase(0, leftNotSpace);
                auto rightNotSpace =
                    value.find_last_not_of(" ");  // 右边最后一个不为空格的
                value.erase(rightNotSpace + 1);

                result[key] = value;
            }
        }

        return result;
    }

    string wordTransform(const string& wordIn,
                         unordered_map<string, string>& transMap) {
        if (transMap.find(wordIn) == transMap.end()) {
            return wordIn;
        } else {
            return transMap[wordIn];
        }
    }

   public:
    void wordTransform(const string& pathMap, const string& pathSource) {
        ifstream mapFile(pathMap), sourceFile(pathSource);
        auto transMap = buildMap(mapFile);
        string line;

        while (getline(sourceFile, line)) {
            istringstream iss(line);
            string word;
            bool isFisrtWord = true;

            while (iss >> word) {
                if (isFisrtWord) {
                    cout << wordTransform(word, transMap);
                    isFisrtWord = false;
                } else {
                    cout << " " << wordTransform(word, transMap);
                }
            }

            cout << endl;
        }
    }

    void test_buildMap(const string& filePath) {
        ifstream ifs(filePath);

        auto result = buildMap(ifs);

        for (const auto& elem : result) {
            cout << elem.first << "    " << elem.second << endl;
        }
    }
};

int main() {
    string pathMap("/home/yeluo/文档/C++/C_Plus_Plus_Primer/11.3/map"),
        pathSource("/home/yeluo/文档/C++/C_Plus_Plus_Primer/11.3/source");

    _11_33 test;
    test.wordTransform(pathMap, pathSource);

    return 0;
}