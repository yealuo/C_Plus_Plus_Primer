#include <iostream>
#include <map>
#include <set>
#include <vector>
using namespace std;

void _11_7() {
    map<string, vector<string>> familyData;
    string lastName, firstName;

    while (true) {
        cout << "输入家族姓氏：";
        cin >> lastName;
        cout << "输入孩子名字：";
        cin >> firstName;

        familyData[lastName].emplace_back(firstName);

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

        for (const auto& first_name : family.second) {
            cout << first_name << " , ";
        }

        cout << endl;
    }
}

int main() {
    _11_7();
    return 0;
}