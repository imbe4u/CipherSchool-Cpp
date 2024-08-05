//vector is simply a dynamic array
//dynamic means the size is not fixed where as array is static array whose size is fixed
//vector is a class in c++ which is used to store the collection of data of any data

// we declare vector as vector<data type>variable name

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> a;
    cout<<"Size of the vector is: "<<a.size();
    //size() is a object
    //to input in vector we use .push_back() fn
    for(int i=0;i<5;i++){
        a.push_back(i);
    }
    cout<<"\nSize of the vector is: "<<a.size();
//to remove element from the back .pop_back();
a.pop_back();
cout<<"\nSize of the vector is: "<<a.size();
}