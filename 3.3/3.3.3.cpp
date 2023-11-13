#include <iostream>
#include <string>
#include <vector>
using namespace std;

void _3_17() {
    vector<string> v;
    string input;
    while (cin >> input) {
        v.push_back(input);
    }
    for (auto& word : v) {
        for (auto& alpha : word) {
            alpha = toupper(alpha);
        }
    }
    for (auto word : v) {
        cout << word << endl;
    }
}

void _3_20() {
    vector<int> v;
    int input;
    while (cin >> input) {
        v.push_back(input);
    }
    decltype(v.size()) count;
    for (count = 0; count < v.size() - 1; count++) {
        int result = v[count] + v[count + 1];
        cout << result << " ";
    }
    cout << endl;
    for (count = 0; count <= ((v.size() - 1) >> 1); count++) {
        int result = v[count] + v[v.size() - 1 - count];
        cout << result << " ";
    }
    cout << endl;
}

int main() {
    _3_20();
    return 0;
}