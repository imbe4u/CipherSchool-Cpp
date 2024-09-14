#include<iostream>
using namespace std;
int func(int a , int b){
   return a+b;
}
int main(){
    int a;
    int b;
    cin>>a>>b;
    func(a,b);
    cout<<a<<b;

}