#include <cctype>
#include <iostream>
#include <string>
using namespace std;

void _6_17_1(const string& str) {
    bool result = false;
    for (const auto& alpha : str) {
        if (isupper(alpha)) {
            result = true;
            break;
        }
    }
    result ? (cout << "有大写字母" << endl) : (cout << "没有大写字母" << endl);
}

void _6_17_2(string& str) {
    for (auto& alpha : str) {
        alpha = tolower(alpha);
    }
}

int main() {
    string str;
    getline(cin, str);
    _6_17_2(str);
    cout << str << endl;
    return 0;
}