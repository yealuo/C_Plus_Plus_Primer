#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
using namespace std;

void _10_29() {
    string path("/home/yeluo/文档/C++/C_Plus_Plus_Primer/8.1/test");
    ifstream ifs(path);
    istream_iterator<string> in(ifs), end;
    vector<string> vec;

    copy(in, end, back_inserter(vec));

    for (const auto& elem : vec) {
        cout << elem << endl;
    }
}

void _10_30() {
    istream_iterator<int> in(cin), end;
    ostream_iterator<int> out(cout, " ");
    vector<int> vec;

    copy(in, end, back_inserter(vec));
    sort(vec.begin(), vec.end());

    copy(vec.begin(), vec.end(), out);
    cout << endl;
}

void _10_31() {
    istream_iterator<int> in(cin), end;
    ostream_iterator<int> out(cout, " ");
    vector<int> vec;

    copy(in, end, back_inserter(vec));
    sort(vec.begin(), vec.end());

    unique_copy(vec.begin(), vec.end(), out);
    cout << endl;
}

void _10_33(const string& path1, const string& path2, const string& path3) {
    ifstream ifs(path1);
    ofstream ofs1(path2, ostream::app), ofs2(path3, ostream::app);
    istream_iterator<int> in(ifs), end;
    ostream_iterator<int> out1(ofs1, " "), out2(ofs2, " ");

    while (in != end) {
        if (*in % 2) {
            *out1++ = *in++;
        } else {
            *out2++ = *in++;
        }
    }
}

int main() {
    string path1("/home/yeluo/文档/C++/C_Plus_Plus_Primer/10.4/in"),
        path2("/home/yeluo/文档/C++/C_Plus_Plus_Primer/10.4/out1"),
        path3("/home/yeluo/文档/C++/C_Plus_Plus_Primer/10.4/out2");

    _10_33(path1, path2, path3);
    return 0;
}