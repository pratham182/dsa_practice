//find target in an array

#include<iostream>
using namespace std;

bool linear_search(int arr[],int size,int index,int target){
    
   //base case
   if(index>=size){
    return false;
   }

   //found
   if(arr[index]==target){
    return true;
   }

   bool ans=linear_search(arr,size,index+1,target);
   return ans;


}
int main()
{

int arr[5]={1,2,3,4,5};
int target=3;
cout<<linear_search(arr,5,0,target);

}