//sort 0's and 1's 


//two pointer approach
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[5]={-1,-1,-4,-1,-1};
    int j=4;
    int i=0;

    for(int index=0;index<5;){
       if(arr[index]==0){
        swap(arr[i],arr[index]);
        index++;
        i++;
       }
       else if(arr[index]==2){
        swap(arr[index],arr[j]);
        index--;
        j--;
       }
    }


    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}