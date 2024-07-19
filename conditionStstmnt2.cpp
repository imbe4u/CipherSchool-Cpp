#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Please enter your marks to know grade"<<endl;
    cin>>marks;
    // if(marks>90){
    //     cout<<"A";
    // }
    // if(marks<90 && marks>80){
    //     cout<<"B";
    // }
    // if(marks<80 && marks>70){
    //     cout<<"C";
    // }
    // if(marks<70){
    //     cout<<"Pass";
    // }   
    //The above code is checking condition in every point greater than and less than too
    if(marks>90){
        cout<<"A";
    }
    else if(marks>80){
        cout<<"B";
    }
    else if(marks>70){
        cout<<"C";
    }
    else {
        cout<<"Pass";
    }

}