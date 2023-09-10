//print extreme from an array

#include<iostream>
using namespace std;
int main(){
     int arr[5];
int n=5;
   for(int i=0;i<5;i++){
    cin>>arr[i];
   }
// //approach 
//    for(int i=0;i<n/2;i++){
//     cout<<arr[i]<<" ";
//     cout<<arr[(n-i)-1]<<" ";
//    }
//    if(n&1){
//     cout<<arr[n/2];
//    }


int i=0;
int j=n-1;

while(i<=j){
   if(i==j){
     cout<<arr[i]<<endl;
   }else{
cout<<arr[i]<<endl;
cout<<arr[j]<<endl;
   }
i++;
j--;
}


}