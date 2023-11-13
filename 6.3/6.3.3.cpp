#include <iostream>
#include <string>
using namespace std;

string (&_6_36(string (&array)[10]))[10];

using stringArray = string[10];
stringArray& _6_37_1(string (&array)[10]);

auto _6_37_2(string (&array)[10]) -> string (&)[10];

string test[10];
decltype(test)& _6_37_3(string (&array)[10]);


int main() {}