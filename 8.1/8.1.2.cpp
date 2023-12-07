#include <iostream>
#include <string>
using namespace std;

istream& _8_1(istream& is) {
    string data;

    while (is >> data) {
        cout << data << " ";
    }

    cout << endl;
    is.clear();

    return is;
}

int main() {
    _8_1(cin);
    return 0;
}