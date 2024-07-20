//the statement either true or false but cant be both at same time.
//for 'and' if both the statement is true then if part will run eg. a<b and b<c it this both will be true then if will run
//for 'or' if one of the statement will be true the also if will run
#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<(a>b);
    cout<<(a>b && c>d);  //it will give output as 0 or 1 as t or f
}