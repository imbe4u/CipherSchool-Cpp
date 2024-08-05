//map works as like array in it we can lookup the element ,deleteion and deletion
//map is a collection of key value pair
//map is mutable
//map is not index based


#include<iostream>
#include<map>
using namespace std;
int main(){
    map <string,int> hash;
    hash["rohit"]=1
    hash["prgramming"]=2;
    hash["reddy"]=3;
    cout<<"The value of rohit in the hashtable is "<<hash["rohit"]<<endl;
    cout<<"the value of unknown will be o "<<hash["cpp"]<<endl;

    hash.insert({"raja",12});
    
    //for lookup all the element;
    for(auto i=hash.begin();i!=hash.end();i++) {
    //auto is itterator   just like int i , .begin is the starting  and .end is the last  
    cout<<"the key will be "<<i->first<<" the value of key will be "<<i->second<<endl; 
    }
}