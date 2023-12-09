#include <functional>
#include <iostream>
#include <vector>
using namespace std;
using namespace std::placeholders;

class _10_22 {
   public:
    static bool isShorter(const string& str, const int length) {
        return str.size() > length;
    }

    void ifLessThan(vector<string>& words, const int length) {
        sort(words.begin(), words.end());
        auto end_unique = unique(words.begin(), words.end());
        words.erase(end_unique, words.end());
        auto count =
            count_if(words.begin(), words.end(), bind(isShorter, _1, length));

        cout << count << endl;
    }
};

class _10_24 {
   public:
    static bool check_size(const int& num, const string::size_type length) {
        return num > length;
    }

    int firstLonger(const string& str, const vector<int> vec) {
        auto resultIt =
            find_if(vec.begin(), vec.end(), bind(check_size, _1, str.size()));

        return *resultIt;
    }
};

class _10_25 {
   private:
    void elimDups(vector<string>& str) {
        sort(str.begin(), str.end());
        auto end_unique = unique(str.begin(), str.end());
        str.erase(end_unique, str.end());
    }

    static bool check_size(const string& s, vector<string>::size_type sz) {
        return s.size() >= sz;
    }

   public:
    void biggies(vector<string>& words, vector<string>::size_type sz) {
        elimDups(words);
        stable_sort(words.begin(), words.end(),
                    [](const string& a, const string& b) {
                        return a.size() < b.size();
                    });

        auto wc =
            partition(words.begin(), words.end(), bind(check_size, _1, sz));

        for_each(words.begin(), wc, [](const string& s) { cout << s << " "; });
        cout << endl;
    }
};

int main() {
    string s("Hello World!");

    vector<int> vec{1, 2, 3, 4, 9, 12, 15, 68, 54, 71};

    _10_24 test;

    cout << test.firstLonger(s, vec) << endl;

    return 0;
}