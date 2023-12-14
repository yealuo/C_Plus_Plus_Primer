#include<iostream>
#include<string>
#include<memory>
#include<cstring>
using namespace std;

void _12_23_1(){
    const char* c_str1="Hello ";
    const char* c_str2="World!";
    char* c_str3=new char[strlen(c_str1)+strlen(c_str2)+1];

    strcat(c_str3,c_str1);
    strcat(c_str3,c_str2);
    cout<<c_str3<<endl;
    delete[] c_str3;
}

void _12_23_2(){
    const string str1="Hello ";
    const string str2="World!";
    char* c_str3=new char[str1.size()+str2.size()+1];

    strcat(c_str3,str1.c_str());
    strcat(c_str3,str2.c_str());
    cout<<c_str3<<endl;
    delete[] c_str3;
}

void _12_24(){
    string line;

    getline(cin,line);

    char* c_str=new char[line.size()+1];

    strcpy(c_str,line.c_str());
    cout<<c_str<<endl;
    delete[] c_str;
}

int main(){
    _12_24();

    return 0;
}