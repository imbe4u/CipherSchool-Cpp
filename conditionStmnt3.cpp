#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the day"<<endl;
    cin>>a;
    switch(a){
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thursday";
            break;
        case 5:
            cout<<"friday";
            break;
        case 6:
            cout<<"saturday";
            break;
    }
}