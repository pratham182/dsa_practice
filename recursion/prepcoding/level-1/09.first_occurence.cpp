#include<iostream>
using namespace std;

int first_ocuurence(int arr[],int index,int no){
 

 //base case
 if(index==5){
    return -1;
 }

 if(arr[index]==no){
    return index;
 }else{
    int n=first_ocuurence(arr,index+1,no);
    return n;

 }

  
}
int main()
{

int arr[5]={8,3,5,8,8};
cout<<first_ocuurence(arr,0,8);

}