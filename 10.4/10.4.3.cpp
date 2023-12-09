#include <algorithm>
#include <forward_list>
#include <iostream>
#include <list>
#include <vector>
using namespace std;

void _10_34(const vector<int>& vec) {
    for (auto it = vec.crbegin(); it != vec.crend(); ++it) {
        cout << *it << " ";
    }

    cout << endl;
}

void _10_35(const vector<int>& vec) {
    auto it = vec.cend();

    while (it != vec.cbegin()) {
        --it;
        cout << *it << " ";
    }

    cout << endl;
}

size_t _10_36(const vector<int>& vec, const int target) {
    auto target_it = find(vec.crbegin(), vec.crend(), target);

    return target_it.base() - vec.cbegin() - 1;
}

void _10_37(const vector<int>& vec, list<int>& lst) {
    copy(vec.begin() + 3, vec.begin() + 8, front_inserter(lst));
}

int main() {
    return 0;
}