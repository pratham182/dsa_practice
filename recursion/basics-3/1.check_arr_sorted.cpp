//check array sorted or not 

#include<iostream>
using namespace std;

bool check_arr_sorted(int arr[],int size,int index){
    //base case
    
    if(size<=index){
        return true;
    }
if(arr[index-1]<arr[index]){
      return false;
    }
    

    bool value=check_arr_sorted(arr,size,index+1);
      return value;
}
int main()
{
    int arr[5]={1};
    int size=1;
    int index=0;
cout<<check_arr_sorted(arr,size,index);
}