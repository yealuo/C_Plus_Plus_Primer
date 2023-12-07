#include <iostream>
#include <string>
#include <vector>
using namespace std;

void _9_50_1(vector<string> s) {
    int int_sum = 0;
    double double_sum = 0.0;

    for (const auto& elem : s) {
        int_sum += stoi(elem);
    }

    cout << int_sum << endl;
}

void _9_50_2(vector<string> s) {
    double double_sum = 0.0;

    for (const auto& elem : s) {
        double_sum += stod(elem);
    }

    cout << double_sum << endl;
}

class date {
   private:
    unsigned year;
    unsigned month;
    unsigned day;

   public:
    date(string s) {
        // 去掉两边空格
        size_t left = s.find_first_not_of(' ');
        size_t right = s.find_last_not_of(' ');

        s.erase(s.begin(), s.begin() + left);
        s.erase(s.begin() + right + 1, s.end());

        // 分两种格式
        string num("0123456789");

        if (num.find(s[0]) != string::npos) {
            size_t index;

            // 月
            month = stoi(s, &index);

            // 日
            index = s.find_first_of(num, index);
            string substr = s.substr(index);
            day = stoi(substr, &index);

            // 年
            index = substr.find_first_of(num, index);
            substr = substr.substr(index);
            year = stoi(substr);

        } else {
            string substr = s.substr(0, 3);

            // 判断月份
            if (substr == "Jan") {
                month = 1;
            } else if (substr == "Feb") {
                month = 2;
            } else if (substr == "Mar") {
                month = 3;
            } else if (substr == "Apr") {
                month = 4;
            } else if (substr == "May") {
                month = 5;
            } else if (substr == "Jun") {
                month = 6;
            } else if (substr == "Jul") {
                month = 7;
            } else if (substr == "Aug") {
                month = 8;
            } else if (substr == "Sep") {
                month = 9;
            } else if (substr == "Oct") {
                month = 10;
            } else if (substr == "Nov") {
                month = 11;
            } else if (substr == "Dec") {
                month = 12;
            }

            // 日
            size_t index = s.find_first_of(num);
            substr = s.substr(index);
            day = stoi(substr, &index);

            // 年
            index = substr.find_first_of(num, index);
            substr = substr.substr(index);
            year = stoi(substr);
        }
    }

    void getDate() {
        cout << "日期是：" << year << "年" << month << "月" << day << "日"
             << endl;
    }
};

int main() {
    date* test = new date("December 7 2023");
    test->getDate();

    return 0;
}