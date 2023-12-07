#include <deque>
#include <iostream>
#include <list>
#include <string>
using namespace std;

void _9_18() {
    string temp;
    deque<string> dq;

    while (cin >> temp) {
        dq.emplace_back(temp);
    }

    for (auto it = dq.cbegin(); it != dq.cend(); ++it) {
        cout << *it << " ";
    }

    cout << endl;
}

void _9_19() {
    string temp;
    list<string> lst;

    while (cin >> temp) {
        lst.emplace_back(temp);
    }

    for (auto it = lst.cbegin(); it != lst.cend(); ++it) {
        cout << *it << " ";
    }

    cout << endl;
}

void _9_20(list<int> lst, deque<int> odd, deque<int> even) {
    for (const auto& elem : lst) {
        if (elem % 2 != 0) {
            odd.emplace_back(elem);
        } else {
            even.emplace_back(elem);
        }
    }
}

int main() {
    _9_18();
    return 0;
}