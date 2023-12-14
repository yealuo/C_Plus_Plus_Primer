#include <iostream>
#include <list>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;

void _11_9() {
    map<string, list<int>> word_lineNum;
}

class Sales_data {
   private:
    int ISBN;

   public:
    int isbn() const { return ISBN; };
};

bool compareIsbn(const Sales_data& lhs, const Sales_data& rhs) {
    return lhs.isbn() < rhs.isbn();
}

void _11_11() {
    multiset<Sales_data, bool (*)(const Sales_data& lhs, const Sales_data& rhs)>
        bookstore(compareIsbn);
}

int main() {
    return 0;
}