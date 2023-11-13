#include<iostream>
#include<vector>
#include<string>
using namespace std;

void _5_5(){
    vector<string> score{"F","D","C","B","A","A++"};
    int grade;
    string gradeLevel;
    while(cin>>grade){
        if(grade<60){
            gradeLevel=score[0];
        }else if(grade<100){
            gradeLevel=score[(grade-50)/10];
            if(grade%10<3){
                gradeLevel+="-";
            }else if(grade%10>7){
                gradeLevel+="+";
            }
        }else if(grade==100){
            gradeLevel=score[5];
        }
        cout<<"成绩等级："<<gradeLevel<<endl;
    }
}

int main(){
    _5_5();
    return 0;
}