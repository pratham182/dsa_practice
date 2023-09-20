//new variety questiom 
//given an array you have set neg on left , 0 at middle and 1 at right


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector <int> arr={-3,0,0,0,0,1,0};

int j=arr.size()-1;  //for postive integer

int i=0;  //for negative integer
int j=arr.size()-1;  //for postive integer
//-3 0 1 -3 4 1 -3 0  //
int index=0 ;   //move this 

while(index <= j){  
    //postive 
    cout<<endl<<index<<endl<<i<<endl;
    if(arr[index]>0){  // if postive found
      swap(arr[index],arr[j]);
      j--;

      //not have to index++ because we don't the element is 0 ,it can be 1 

    }else if(arr[index]<0){  //-3<0 true 
      swap(arr[index],arr[i]);    // if neg ele found
      i++;
      index++;
      
    }else{
        index++; //else index ++
    }
    
    for(int n=0;n<arr.size();n++){
      
      cout<<arr[n]<<" ";
    }
    cout<<endl;

}
for(int i=0;i<arr.size();i++){
  cout<<arr[i]<<" ";
}
}