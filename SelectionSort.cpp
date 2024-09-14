#include <bits/stdc++.h>
using namespace std;
//2 152 15 65 98 4 12 65 36 65 98 4 12 65 36
void sorting(int n, int arr[]){
    int min;
    for(int i=0;i<n;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]) min=j;
        }
    swap(arr[i],arr[min]);    //time complexity int his is O(N2)
    }
   //we can sort directly by sort function also
    //sort(arr,arr+n);
    //arr-> gives the first element of the array & array+n gives the element of the last element 
    //time complexity in worst case is O(N(logN))

}
void print (int n,int arr[]){
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
    sorting(n,arr);
    print(n,arr);
}