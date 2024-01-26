//print arr using recrusion 
#include<iostream>
using namespace std;

void display_arr(int arr[],int index){
    //base case
    
    if(index == 5){
        
     return ;
    }

    cout<<arr[index]<<endl;
    display_arr(arr,index+1);
}
int main()
{

int arr[5]={1,2,3,4,5};
display_arr(arr,0);
}