#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class _10_11 {
   public:
    static bool isShorter(const string& s1, const string& s2) {
        return s1.size() < s2.size();
    }

    void elimDups(vector<string>& str) {
        sort(str.begin(), str.end());
        auto end_unique = unique(str.begin(), str.end());
        str.erase(end_unique, str.end());
        stable_sort(str.begin(), str.end(), isShorter);

        for (const auto& elem : str) {
            cout << elem << " ";
        }

        cout << endl;
    }
};

class _10_13 {
   private:
    static bool isUpTo5(const string& s) { return s.size() >= 5; }

   public:
    bool subSize(vector<string>& str) {
        auto begin_false = partition(str.begin(), str.end(), isUpTo5);

        if (begin_false == str.begin()) {
            return false;
        }

        for (auto it = str.begin(); it != begin_false; ++it) {
            cout << *it << " ";
        }

        cout << endl;

        return true;
    }
};

int main() {
    vector<string> str{"quick", "red", "fox",  "jumps",
                       "over",  "the", "slow", "turtle"};
    _10_13 test;

    cout << test.subSize(str) << endl;

    return 0;
}