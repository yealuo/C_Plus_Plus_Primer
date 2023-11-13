#include<iostream>
#include<string>
using namespace std;

void _5_19(){
    string flag;
    do
    {
        string str1,str2;
        cout<<"请输入string1：";
        cin>>str1;
        cout<<"请输入string2：";
        cin>>str2;
        int count1=0,count2=0;
        for(auto &elem:str1){
            ++count1;
        }      
        for(auto &elem:str2){
            ++count2;
        }
        count1 < count2 ? (cout << "string1较短，内容为：" << str1 << endl)
                        : (cout << "string2较短，内容为：" << str2 << endl);
        cout<<"输入yes以继续，输入no以终止：";
        cin>>flag;
    } while (!flag.empty()&&flag[0]!='n');
    
}

int main(){
    _5_19();
    return 0;
}