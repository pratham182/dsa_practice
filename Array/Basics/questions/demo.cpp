#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector <int> arr={1,2,0,0,5,-6,9,-3};


int i=0;
int j=arr.size()-1;

int index=0;
while(index <= j){
    //postive
    if(arr[index]>0){
      swap(arr[index],arr[j]);
      j--;

    }else if(arr[index]<0){
      swap(arr[index],arr[i]);
      i++;
      index++;
      
    }else{
        index++;
    }

}
for(int i=0;i<arr.size();i++){
  cout<<arr[i]<<" ";
}
}