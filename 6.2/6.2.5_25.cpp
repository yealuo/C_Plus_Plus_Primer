#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    string str;
    str = str + argv[1] +" "+ argv[2];
    cout << str << endl;
}