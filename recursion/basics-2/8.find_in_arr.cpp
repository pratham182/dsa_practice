//find in array if found then valid otherwise not found
#include<iostream>
using namespace std;

int find_arr(int arr[],int size,int index,int target){
    //base case

    if(size<=index){
       return -1;
    } 
    if(arr[index]==target){
       return index;
    }

    int x=find_arr(arr,size,index+1,target);
      return x;
}

int main()
{

int arr[5]={1,2,3,4,5};
cout<<find_arr(arr,5,0,32);

}