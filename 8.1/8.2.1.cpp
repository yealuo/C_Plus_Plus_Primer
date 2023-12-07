#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

vector<string> _8_4(string path) {
    vector<string> result;
    ifstream ifs(path);

    if (ifs) {
        string buf;
        while (getline(ifs, buf)) {
            result.push_back(buf);
        }
    }

    return result;
}

vector<string> _8_5(string path) {
    vector<string> result;
    ifstream ifs(path);

    if (ifs) {
        string buf;
        while (ifs >> buf) {
            result.push_back(buf);
        }
    }

    return result;
}

int main() {
    return 0;
}