#include<iostream>
using namespace std;
int func(int a,int b){
    int c;
    if(a>b){
        c=a;
        return c;
    }
    else{
    return b;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<func(a,b);
}