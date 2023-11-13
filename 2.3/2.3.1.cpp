#include <iostream>
using namespace std;

void _2_17() {
    int i, &ri = i;
    i = 5;
    ri = 10;
    cout << i << " " << ri << endl;
}

int main() {
    _2_17();
    return 0;
}