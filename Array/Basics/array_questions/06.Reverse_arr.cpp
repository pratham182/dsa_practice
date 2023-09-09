#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){


    int arr[5];
int n=5;
   for(int i=0;i<5;i++){
    cin>>arr[i];
   }

   //reverse an array

   for(int i=0;i<n/2;i++){
    swap(arr[i],arr[(n-1)-i]);
   }


   for(int i=0;i<5;i++){
    cout<<arr[i];
   }
}