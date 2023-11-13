#include <iostream>
#include <string>
using namespace std;

void _3_10() {
    string in;
    getline(cin, in);
    for (decltype(in.size()) i = 0; i < in.size(); ++i) {
        if (ispunct(in[i])) {
            in.erase(i, 1);
        }
    }
    cout << in << endl;
}

int main() {
    _3_10();
    return 0;
}