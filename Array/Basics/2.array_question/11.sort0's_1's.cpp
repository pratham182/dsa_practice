//counting 
//2 pointer ==pending 
//sort function  ==pending 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
  // approach ist


  //count total no of 0 and 1's in an array 
   int count0=0;
   int count1=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==0){
            count0++;
        }else{
            count1++;
        }

    }


    //add it in an array 
    int x=0;
    int ele=0;
    while(x<n){
        if(x==count0-1){
            ele=1;
        }

        arr[x]=ele;
        
        
        x++;

    }
//      cout<<count0<<" "<<count1<<endl;

//     for(int i=0;i<count0;i++){
//         arr[i]=0;

//     }
//     for(int i=n-1;i>count0;i--){
//         arr[i]=1;
//     }

 
for(int i=0;i<n;i++){
  cout<<arr[i]<<endl;
}


//sorting ==n log n

     
}