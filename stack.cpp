//stack is also a stl and data str. which is last in first out
//stack <data type> variable name;
//we use .push(elemnt) fn to insert
//.pop() to remove from last
//.empty() to chk empty or not it works with 0 & 1 if 0 that means it is false and 1 that means it is true

#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"top element is "<<s.top()<<endl;
    s.pop();
    cout<<"top element is "<<s.top()<<endl;
    if(s.empty()==0){
        cout<<"stack is not empty"<<endl;
    }
    else{
        cout<<"stack is empty"<<endl;
    }
    s.pop();
    s.pop();
    if(s.empty()==0){
        cout<<"stack is not empty"<<endl;
    }
    else{
        cout<<"stack is empty"<<endl;
    }
}