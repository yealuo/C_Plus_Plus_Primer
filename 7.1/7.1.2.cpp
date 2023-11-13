#include <iostream>
#include <string>
using namespace std;

struct Person;

istream &read(istream &is,Person &p);

struct Person {
    public:
        Person() = default;
        Person(const string& n, const string& a) : name(n), address(a) {}
        Person(istream& is) { read(is, *this); }
        string getName() const { return name; }
        string getAddress() const { return address; }
    private:
        string name;
        string address;
};
