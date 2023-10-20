//binary search using recursion
#include<iostream>
using namespace std;

bool binary_search(int arr[],int size,int start,int end,int target){

    //base case 
    if(start>end){
      
      return false;
    }

    //found
    int mid=start+(end-start)/2;
    if(arr[mid]==target){
        return true;
    }
    else if(arr[mid]>target){
        end=mid-1;
    }else{
        start=mid+1;
    }

    return binary_search(arr,size,start,end,target);
}
int main()
{

int arr[5]={1,2,3,4,5};

int size=5;
int start=0;
int end=4;
int target=1000;
cout<<binary_search(arr,size,start,end,target);
}