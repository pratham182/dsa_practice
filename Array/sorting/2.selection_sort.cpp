//selection sort
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>arr={5,4,3,2,1};


    for(int i=0;i<arr.size();i++){
        int min=i;
    for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[min]){
               min=j;
            }
    }
    swap(arr[min],arr[i]);
    
    }
 for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
 }   

}