#include<iostream>
using namespace std;
//40 23 25 665 3 2 1
void binary(int n,int arr[]){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

}
void display(int n,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    binary(n,arr);
    display(n,arr);
}