#include <iostream>
#include <string>
#include <vector>
using namespace std;

void _3_22() {
    vector<string> text{"This is the first sentence.",
                        "This is the second sentence.", "",
                        "This is the third sentence."};
    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it) {
        for (auto& alpha : (*it)) {
            alpha = toupper(alpha);
        }
        cout << *it;
    }
}

void _3_23(){
    vector<int> v{1,2,3,4,5,6,7,8,9,10};
    for(auto it=v.begin();it!=v.end();++it){
        (*it)*=2;
    }
    for(auto num:v){
        cout<<num<<endl;
    }

}


int main() {
    _3_23();
    return 0;
}