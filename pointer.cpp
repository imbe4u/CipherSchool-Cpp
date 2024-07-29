#include<iostream>
using namespace std;
void swap(int *x,int *y){
    int c;
    c=*x;
    *x=*y;
    *y=c;
}
int main(){
    int a,b;
    a=3;
    b=4;
// int *p;
// p=&a;
// cout<<p<<*p;
    swap(&a,&b);
    cout<<"Valued swap between a and b are : "<<a<<" "<<b;
}