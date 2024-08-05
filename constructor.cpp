//constructor is a function 
//it is same as class name
//it does not had the return type.
//constructor is called automatically after creating th object

#include<iostream>
using namespace std;
class student{
    public:
    int amount;
    int days;

    student(){
        amount=0;
        days=0;
        cout<<"constructor is called"<<endl;
    }
    ~student(){ //distructor is used to delete the object
        cout<<"Now the use of object is complete and the object is getting destroyed";
    }
};
int main(){
    student q; //here obj is created
    cout<<"this is to only check wether destructor is done or not it is done after all code is done"<<endl;
}