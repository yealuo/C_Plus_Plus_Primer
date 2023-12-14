#include <iostream>
#include <memory>
#include <string>
using namespace std;

void _12_26() {
    int n = 10;
    allocator<string> a;
    string in;
    auto const p = a.allocate(n);
    auto q = p;

    while (cin >> in && q != p + n) {
        a.construct(q++, in);
    }

    //使用数组
    for (auto i = p; i != p + n; ++i) {
        cout << *i << endl;
    }

    while (q != p) {
        a.destroy(--q);
    }

    a.deallocate(p, n);
}

int main() {
    _12_26();
    return 0;
}