#include <iostream>
#include <list>
#include <vector>
using namespace std;

void _9_26() {
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> vec(begin(ia), end(ia));
    list<int> lst(begin(ia), end(ia));

    auto v_it = vec.begin();

    while (v_it != vec.end()) {
        if (*v_it % 2 == 0) {
            v_it = vec.erase(v_it);
        } else {
            ++v_it;
        }
    }

    auto l_it = lst.begin();

    while (l_it != lst.end()) {
        if (*l_it % 2 != 0) {
            l_it = lst.erase(l_it);
        } else {
            ++l_it;
        }
    }
}

int main() {
    return 0;
}