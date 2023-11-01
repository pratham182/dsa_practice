#include<iostream>
using namespace std;
void print(int arr[],int size,int index){
    //base case
    if(index>=size){
        return ;
    }
    
    print(arr,size,index+1);
    cout<<arr[index];
     
}
int main()
{
    int arr[3]={1,2,3};
print(arr,3,0);
}