#include <iostream>
#include <string>
#include <vector>
using namespace std;

void _5_20() {
    string curWord, prevWord;
    vector<string> v;
    while (cin >> curWord) {
        v.push_back(curWord);
    }
    for (auto begin = v.begin(), end = v.end(); begin != end; ++begin) {
        curWord = *begin;
        if (curWord == prevWord) {
            cout << "\n重复出现：" << curWord << endl;
            break;
        }
        prevWord = curWord;
        if ((begin + 1) == end) {
            cout << "\n没有任何单词是重复出现的。" << endl;
        }
    }
}

int main() {
    _5_20();
    return 0;
}