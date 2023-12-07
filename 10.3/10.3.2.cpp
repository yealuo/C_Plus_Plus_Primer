#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void _10_14() {
    auto func = [](int a, int b) { return a + b; };
}

int _10_15(int a) {
    auto func = [a](int b) { return a + b; };

    return func(3);
}

class _10_16 {
   private:
    void elimDups(vector<string>& str) {
        sort(str.begin(), str.end());
        auto end_unique = unique(str.begin(), str.end());
        str.erase(end_unique, str.end());
    }

   public:
    void biggies(vector<string>& words, vector<string>::size_type sz) {
        elimDups(words);
        stable_sort(words.begin(), words.end(),
                    [](const string& a, const string& b) {
                        return a.size() < b.size();
                    });

        auto wc = find_if(words.begin(), words.end(),
                          [sz](const string& str) { return str.size() >= sz; });

        for_each(wc, words.end(), [](const string& s) { cout << s << " "; });
        cout << endl;
    }
};

class _10_18 {
   private:
    void elimDups(vector<string>& str) {
        sort(str.begin(), str.end());
        auto end_unique = unique(str.begin(), str.end());
        str.erase(end_unique, str.end());
    }

   public:
    void biggies(vector<string>& words, vector<string>::size_type sz) {
        elimDups(words);
        stable_sort(words.begin(), words.end(),
                    [](const string& a, const string& b) {
                        return a.size() < b.size();
                    });

        auto wc = partition(words.begin(), words.end(),
                            [sz](const string& s) { return s.size() >= sz; });

        for_each(words.begin(), wc, [](const string& s) { cout << s << " "; });
        cout << endl;
    }
};

int main() {
    return 0;
}