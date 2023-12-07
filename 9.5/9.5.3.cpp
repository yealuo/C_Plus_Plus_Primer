#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void _9_47_1() {
    string s("ab2c3d7R4E6");
    string num("0123456789");
    string alpha("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");

    string::size_type pos = 0;

    while ((pos = s.find_first_of(num, pos)) != string::npos) {
        cout << s[pos];
        ++pos;
    }

    cout << endl;

    pos = 0;

    while ((pos = s.find_first_of(alpha, pos)) != string::npos) {
        cout << s[pos];
        ++pos;
    }

    cout << endl;
}

void _9_47_2() {
    string s("ab2c3d7R4E6");
    string num("0123456789");
    string alpha("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");

    string::size_type pos = 0;

    while ((pos = s.find_first_not_of(alpha, pos)) != string::npos) {
        cout << s[pos];
        ++pos;
    }

    cout << endl;

    pos = 0;

    while ((pos = s.find_first_not_of(num, pos)) != string::npos) {
        cout << s[pos];
        ++pos;
    }

    cout << endl;
}

void _9_49(string s) {
    string invalid("bdfhkltfgjpqy");
    vector<string::size_type> index;

    string::size_type pos = 0;

    while ((pos = s.find_first_of(invalid, pos)) != string::npos) {
        index.emplace_back(pos);
        ++pos;
    }

    string::size_type id = -1;
    string::size_type maxId;
    string::size_type maxLength = 0;

    for (auto elem : index) {
        string::size_type length = elem - id - 1;

        if (length > maxLength) {
            maxLength = length;
            maxId = id + 1;
        }

        id = elem;
    }

    if (s.size() - index.back() - 1 > maxLength) {
        maxLength = s.size() - index.back() - 1;
        maxId = index.back() + 1;
    }

    for (auto it = s.begin() + maxId; it < s.begin() + maxId + maxLength;
         ++it) {
        cout << *it;
    }

    cout << endl;
}

int main() {
    _9_49("ancestor");
    return 0;
}
