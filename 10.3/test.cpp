#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool isStrLongThan5(string& str)
{
    return str.size() >= 5;
}

void test1013()
{
    vector<string> svec = {"hello", "world", "bin", "is", "the", "banana"};
    auto it = partition(svec.begin(), svec.end(), isStrLongThan5);
    while (-- it != (svec.begin()-1)) {
        cout << *it << " ";
    }
}

int main(){
    return 0;
}