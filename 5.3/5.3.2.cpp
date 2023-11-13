#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using namespace std;

void _5_9(){
    char alpha;
    int count=0;
    while(cin>>alpha){
        switch(alpha){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            ++count;
            break;
        }
    }
    cout<<"元音字母有"<<count<<"个。"<<endl;
}

void _5_10() {
    char alpha;
    int count = 0;
    while (cin >> alpha) {
        switch (toupper(alpha)) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                ++count;
                break;
        }
    }
    cout << "元音字母有" << count << "个。" << endl;
}

void _5_11(){
    int count=0;
    char alpha;
    while(cin.get(alpha)){
        if(isspace(alpha)){
            ++count;
        }
    }
    cout << "空格、制表符、换行符有" << count << "个。" << endl;
}

void _5_12(){
    int ffCount=0,flCount=0,fiCount=0;
    char alpha;
    char preAlpha=' ';
    while(cin.get(alpha)){
        switch(alpha){
            case 'f':
            if(preAlpha=='f'){
                ++ffCount;
            }
            break;
            case 'l':
            if(preAlpha=='f'){
                ++flCount;
            }
            break;
            case 'i':
            if(preAlpha=='f'){
                ++fiCount;
            }
            break;
        }
        preAlpha=alpha;
    }
    cout << "ffCount:" << ffCount << endl;
    cout << "flCount:" << flCount << endl;
    cout << "fiCount:" << fiCount << endl;
}

void _5_14(){
    int maxCount=1;
    string maxRepeatedWord;
    string curWord;
    string prevWord;
    int curCount;
    while(cin>>curWord){
        if(curWord!=prevWord){
            curCount=1;
        }else{
            ++curCount;
            if(maxCount<curCount){
                maxCount=curCount;
                maxRepeatedWord=curWord;
            }
        }
        prevWord=curWord;
    }
    if(maxRepeatedWord.empty()){
        cout<<"\n不存在出现最多的单词！"<<endl;
    }else{
        cout<<"\n单词 "<<maxRepeatedWord<<" 出现次数最多，出现 "<<maxCount<<" 次。"<<endl;
    }
}

int main(){
    _5_14();
    return 0;
}