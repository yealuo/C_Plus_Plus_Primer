#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

void _8_10(string path) {
    vector<string> temp;
    string line, word;

    ifstream ifs(path);

    if (ifs) {
        while (getline(ifs, line)) {
            temp.push_back(line);
        }

        for (auto elem : temp) {
            istringstream iss(elem);

            while (iss >> word) {
                cout << word << " ";
            }

            cout << endl;
        }
    }
}

struct PersonInfo {
    string name;
    vector<string> phones;
};

void _8_11() {
    string line, word;
    vector<PersonInfo> people;
    istringstream record;

    while (getline(cin, line)) {
        PersonInfo info;

        record.clear();  // 清除流状态以读入后续流，如不添加改行则只会打印一行
        record.str(line);
        record >> info.name;

        while (record >> word) {
            info.phones.push_back(word);
        }

        people.push_back(info);
    }

    for (auto& elem : people) {
        cout << elem.name << " ";
        for (auto& data : elem.phones) {
            cout << data << " ";
        }

        cout << endl;
    }
}

int main() {
    string path("/home/yeluo/文档/C++/C_Plus_Plus_Primer/8.1/test");

    _8_11();

    return 0;
}