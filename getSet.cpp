//to access elements of private specifiers we use get and set function
//private memebers are only selected inside the class
#include<iostream>
using namespace std;

class Bank_element{
    private:
    string name;
    int creditNumber;
    int cvv;
    string userName;
    string password;
public:
    void set_creditNumber(int number){  //set sets the value or private member
        creditNumber=number;
    }
    void get_creditNumber(){  // get gives the out put 
        cout<<creditNumber;
       
    }
    void alldata(string n,int v,string u,string p){
        //here we can we use this also as "this " is a pointer of object to the class and by using this we can use real name also as this->creditNumber .
        // this store the address of  object
        name=n;
        cvv=v;
        userName=u;
        password=p;
    }
    void alldata(){
         cout<<name<<cvv<<userName<<password;
    }
};
int main(){
    Bank_element a,b,c;
    //a.name="rohit"; // we will get error as we define  data in private so it is not accessible
    a.set_creditNumber(1234);
    a.alldata("raj",123,"user","pass");
    a.get_creditNumber();
    a.alldata();
}
