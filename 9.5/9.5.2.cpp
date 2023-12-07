#include <iostream>
#include <string>
using namespace std;

void _9_43(string& s, string oldVal, string newVal) {
    int index = s.find(oldVal);

    s.erase(s.begin() + index, s.begin() + index + oldVal.size());
    s.insert(s.begin() + index, newVal.begin(), newVal.end());
}

void _9_44(string& s, string oldVaL, string newVal) {
    int index = s.find(oldVaL);

    s.replace(index, oldVaL.size(), newVal);
}

string _9_45(string name, string prefix, string suffix) {
    name.insert(name.begin(), prefix.begin(), prefix.end());
    name.append(" ");
    name.append(suffix);

    return name;
}

string _9_46(string name, string prefix, string suffix) {
    name.insert(0, prefix);
    name.insert(name.size(), " ");
    name.insert(name.size(), suffix);

    return name;
}

int main() {
    string name("YeLuo");

    name=_9_46(name, "Mr.", "Ph.D");
    cout << name << endl;

    return 0;
}