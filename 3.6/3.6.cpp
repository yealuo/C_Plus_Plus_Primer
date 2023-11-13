#include<iostream>
#include<iterator>
using namespace std;

int arr[3][4]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

void _3_43(){
    //version 1
     for (int (&row)[4] : arr) {
        for(int col:row){
            cout<<col<<" ";
        }
        cout<<endl;
     }
    //version 2
    for(size_t row=0;row<3;++row){
        for(size_t col=0;col<4;++col){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    //version 3
    for(int (*row)[4]=begin(arr);row!=end(arr);++row){
        for(int *col=begin(*row);col!=end(*row);++col){
            cout<<*col<<" ";
        }
        cout<<endl;
    }
}

using int_array=int[4];
void _3_44(){
    //version 1
    for(int_array &row:arr){
        for(int col:row){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    //version 3
    for(int_array *row=begin(arr);row!=end(arr);++row){
        for(int *col=begin(*row);col!=end(*row);++col){
            cout<<*col<<" ";
        }
        cout<<endl;
    }
}

void _3_45(){
    //version 1
    for(auto &row:arr){
        for(auto col:row){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    //version 2
    for (auto row = 0; row < 3; ++row){
        for (auto col = 0; col < 4; ++col) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    //version 3
    for(auto row=begin(arr);row!=end(arr);++row){
        for(auto col=begin(*row);col!=end(*row);col++){
            cout<<*col<<" ";
        }
        cout<<endl;
    }
}

int main(){
    _3_45();
    return 0;
}