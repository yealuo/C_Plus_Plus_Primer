#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void _10_20(vector<string> words) {
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());

    int count = count_if(words.begin(), words.end(),
                         [](const string& s) { return s.size() > 6; });

    cout << count << endl;
}

void _10_21(int i) {
    auto func = [&i]() -> bool {
        if (i != 0) {
            --i;
        }

        if (i == 0) {
            return true;
        }

        return false;
    };

    while (!func()) {
        cout << i << endl;
    }
}

int main() {
    _10_21(10);
    return 0;
}