#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

vector<pair<string, int>> _11_12(const vector<string> strVec,
                                 const vector<int> intVec) {
    vector<pair<string, int>> result;

    for (int i = 0, j = 0; i < strVec.size() && j < intVec.size(); ++i, ++j) {
        result.emplace_back(strVec[i], intVec[j]);
    }

    return result;
}

void _11_14() {
    map<string, vector<pair<string, string>>> familyData;
    string lastName, firstName, birthDay;

    while (true) {
        cout << "输入家族姓氏：";
        cin >> lastName;
        cout << "输入成员名字：";
        cin >> firstName;
        cout << "请输入成员生日：";
        cin >> birthDay;

        familyData[lastName].emplace_back(firstName, birthDay);

        cout << "是否继续输入？（y/n)";

        char flag;

        cin >> flag;

        string temp;
        getline(cin, temp);  // 清空输入缓冲

        if (flag == 'n') {
            break;
        }
    }

    for (const auto& family : familyData) {
        cout << "家族：" << family.first << endl;
        cout << "成员：";

        for (const auto& chileData : family.second) {
            cout << chileData.first << " " << chileData.second << " , ";
        }

        cout << endl;
    }
}

int main() {
    _11_14();
    return 0;
}