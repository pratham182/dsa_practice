//given an array you have to modify in  that way that  neg placed left and postive at right

//eg == [1,1,-1,1,-1,-2]
//ouput == [-1,-1,-2,1,1,1]

//appraoch :
//two pointer approach
//sorting 
//create another array and if postive or neg found then insert in that array (space extra o(n))

#include<iostream>
#include<bits/stdc++.h>   //fopr using vector library
using namespace std;


void anotherArray(vector<int> arr, int n){
//create an array that take extra space 
vector<int > arr2;
for(int i=0;i<n;i++){
    if(arr[i]<0){  //negative no found
      arr2.push_back(arr[i]);
    }
}


for(int i=0;i<n;i++){
    if(arr[i]>0){  //postive  no found
      arr2.push_back(arr[i]);
    }
}
for(int i=0;i<n;i++){
    cout<<arr2[i]<<" ";
}
}
int main(){
vector<int> arr={-1,1,1,2,5,-1,9,3,-6};
//aproach 3
anotherArray(arr,arr.size());



}