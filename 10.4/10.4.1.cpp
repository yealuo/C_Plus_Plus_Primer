#include <functional>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>
using namespace std;

void _10_27(const vector<int>& vec, list<int>& lst) {
    unique_copy(vec.begin(), vec.end(), back_inserter(lst));
}

void _10_28(const vector<int>& vec,
            list<int>& lst1,
            list<int>& lst2,
            list<int> lst3) {
    copy(vec.begin(), vec.end(), inserter(lst1, lst1.begin()));
    copy(vec.begin(), vec.end(), back_inserter(lst2));
    copy(vec.begin(), vec.end(), front_inserter(lst3));
}

int main() {
    vector<int> vec{1, 2, 3, 4, 5, 6};
    list<int> lst;
    _10_27(vec, lst);

    for (const auto& elem : lst) {
        cout << elem << endl;
    }

    return 0;
}