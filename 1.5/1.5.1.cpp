#include <iostream>
#include "Sales_item.h"
using namespace std;

void _1_20() {
    Sales_item book;
    cin >> book;
    cout << book << endl;
}

void _1_21() {
    Sales_item item1, item2;
    cin >> item1 >> item2;
    cout << item1 + item2 << endl;
}

void _1_22() {
    Sales_item book,result;
    cin>>result;
    while (cin>>book) {
        result+=book;
    }
    cout<<result<<endl;
}

int main() {
    _1_22();
    return 0;
}