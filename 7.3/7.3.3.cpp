#include <iostream>
using namespace std;

class X;
class Y;

class X {
    Y* current = nullptr;
};
class Y {
    X myX;
};

int main() {
    return 0;
}