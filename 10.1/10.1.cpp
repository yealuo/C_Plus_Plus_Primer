#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void _10_1() {
    int num;
    vector<int> vec;

    while (cin >> num) {
        vec.emplace_back(num);
    }

    cout << count(vec.begin(), vec.end(), 5) << endl;
}

void _10_2() {
    string str;
    vector<string> vec;

    while (cin >> str) {
        vec.emplace_back(str);
    }

    cout << count(vec.begin(), vec.end(), "hello") << endl;
}

int main() {
    _10_2();

    return 0;
}