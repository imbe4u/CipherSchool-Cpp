//list act as double linked list

#include <iostream>
#include <list>
using namespace std;
int main(){
    list <int> a;
    a.push_back(4);
    a.push_back(5);
    a.push_front(3);
    a.push_front(2);
//we can do both add in front and back in linked list but not in vector because vector is an array
    a.pop_back();
    a.pop_front();

    for(auto i=a.begin();i!=a.end();i++){
        cout<<*i<<" ";
    }
}
