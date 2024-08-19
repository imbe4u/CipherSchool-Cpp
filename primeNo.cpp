#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n+1];
vector<int>arr1(n+1);
for(int i=0;i<=n;i++) arr[i]=i;

for(int i=2;i<=n;i++){
    if(arr[i]!=0){
                    for(int j=i+1;j<=n;j++){
                        if(arr[j]%arr[i]==0) arr[j]=0;
                }}

}

for(int k=2;k<=n;k++){
    
    if(arr[k]!=0){
        cout<<arr[k]<<" ";
        arr1.push_back(arr[k]);
        }
}
if(binary_search(arr1.begin(), arr1.end(),17)) {
cout << "Element found\n";
}else{
cout<<"Element Not found";
}
}

//--------------------------------------------------\\

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 23;
//     // cin>>n;
//     ++n;
//     int arr[n];
//     for(int i = 0; i<n; ++i) arr[i] = i;
    

//     for(int i = 2; i<n-1; ++i){
//         if(arr[i] != 0){
//             for(int j = i+1; j<n; ++j){
//                 if(arr[j]%arr[i] == 0) arr[j] = 0;
//             }
//         }
//         printf("[%d]:", i);
//         for(int k = 0; k<n; ++k){
//             cout<<arr[k]<<" ";
//         }
//         cout<<endl;
//     }


//     return 0;
    
// }
