//print min from an array 
#include<iostream>
#include<limits.h>
using namespace std;

int find_min(int arr[],int size,int index,int &min){
    //base case
    if(index>=size){
        return min;
    }

    if(min>arr[index]){
      min=arr[index];
    }

    //recrusive realtion
   int ans= find_min(arr,size,index+1,min);
     return ans;



}

int main()
{

int min=INT_MAX;
int arr[5]={1,2,3,45,2};

cout<<find_min(arr,5,0,min);
cout<<min;
}