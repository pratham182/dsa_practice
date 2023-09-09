//print extreme from an array

#include<iostream>
using namespace std;
int main(){
     int arr[5];
int n=5;
   for(int i=0;i<5;i++){
    cin>>arr[i];
   }

   for(int i=0;i<n/2;i++){
    cout<<arr[i]<<" ";
    cout<<arr[(n-i)-1]<<" ";
   }
   if(n&1){
    cout<<arr[n/2];
   }
}