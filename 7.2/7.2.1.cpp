#include <iostream>
#include <string>
using namespace std;

struct Person {
    friend istream& readPerson(istream& is, Person& p);

   public:
    Person() = default;
    Person(const string& n, const string& a) : name(n), address(a) {}
    Person(istream& is) { readPerson(is, *this); }
    string getName() const { return name; }
    string getAddress() const { return address; }

   private:
    string name;
    string address;
};

istream& readPerson(istream& is, Person& p);
ostream& printPerson(ostream& os, const Person& p);

istream& readPerson(istream& is, Person& p) {
    is >> p.name >> p.address;
    return is;
}

ostream& printPerson(ostream& os, const Person& p) {
    os << "Name:" << p.getName() << endl;
    os << "Address:" << p.getAddress() << endl;
    return os;
}

int main() {
    Person person;
    readPerson(cin, person);
    printPerson(cout, person);
    return 0;
}