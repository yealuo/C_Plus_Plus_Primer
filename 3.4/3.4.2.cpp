#include <iostream>
#include <string>
#include <vector>
using namespace std;

void _3_24() {
    int num;
    vector<int> v;
    while (cin >> num) {
        v.push_back(num);
    }
    for (auto i = v.begin(); i != v.end() - 1; ++i) {
        cout << *i + *(i + 1) << " ";
    }
    cout << endl;
    for (auto i = v.begin(); i != v.begin() + (v.end() - v.begin() - 1) / 2 + 1;
         ++i) {
        auto j = v.begin() + v.size() - 1 - (i - v.begin());
        cout << *i + *j << " ";
    }
    cout << endl;
}

void _3_25() {
    vector<int> scores(11, 0);
    unsigned grade;
    while (cin >> grade) {
        if (grade < 101) {
            ++*(scores.begin() + grade / 10);
        }
    }
    for (auto i : scores) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    _3_25();
    return 0;
}