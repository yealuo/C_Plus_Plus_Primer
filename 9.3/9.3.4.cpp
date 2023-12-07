#include <forward_list>
#include <iostream>
using namespace std;

void _9_27(forward_list<int>& f_lst) {
    auto prev = f_lst.before_begin();
    auto curt = f_lst.begin();

    while (curt != f_lst.end()) {
        if (*curt % 2 != 0) {
            curt = f_lst.erase_after(prev);
        } else {
            ++curt;
            ++prev;
        }
    }
}

int main() {
    string s="C++ Primer 4th Ed.";
    s.erase(11,3);
    cout<<s<<endl;
    s.insert(11,"5th");
    cout<<s<<endl;
    return 0;
}