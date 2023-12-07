#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void elimDups(vector<string>& str) {
    sort(str.begin(), str.end());
    auto end_unique = unique(str.begin(), str.end());
    str.erase(end_unique, str.end());
}

int main() {
    return 0;
}