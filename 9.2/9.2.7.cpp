#include <iostream>
#include <list>
#include <vector>
using namespace std;

void _9_16(list<int> lst, vector<int> vec) {
    vector<int> lst_vec(lst.begin(), lst.end());

    if (lst_vec == vec) {
        cout << "lst == vec" << endl;
    } else if (lst_vec > vec) {
        cout << "lst > vec" << endl;
    } else {
        cout << "lst < vec" << endl;
    }
}

int main() {
    return 0;
}