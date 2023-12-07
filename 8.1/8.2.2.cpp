#include<iostream>
#include<fstream>
using namespace std;

void _8_8(string path,string data){
    fstream file(path,fstream::app);

    if(file){
        file<<data<<endl;
    }

    return;
}

int main(){
    string path="/home/yeluo/文档/C++/C_Plus_Plus_Primer/8.1/test";

    _8_8(path,"Hello");
    _8_8(path,"World");

    return 0;
}