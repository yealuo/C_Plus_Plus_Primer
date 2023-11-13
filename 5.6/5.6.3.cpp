#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

void _5_23() {
    int int1, int2;
    cin >> int1 >> int2;
    cout << int1 / int2;
}

void _5_24() {
    int int1, int2;
    cin >> int1 >> int2;
    if (int2 == 0) {
        throw runtime_error("除数为0！");
    }
    cout << int1 / int2 << endl;
}

void _5_25() {
    int int1, int2;
    while (cin >> int1 >> int2) {
        try {
            if (int2 == 0) {
                throw runtime_error("除数为0！");
            }
            cout << int1 / int2 << endl;
        } catch (runtime_error& err) {
            cout << "除数不能为0！" << endl;
            string input;
            do {
                cout << "是否重新输入？yes 或 no ：";
                cin >> input;
            } while (input != "yes" && input != "no");
            if (input[0] == 'n') {
                break;
            }
        }
    }
}

int main() {
    _5_25();
    return 0;
}
