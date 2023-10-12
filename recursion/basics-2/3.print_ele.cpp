//print element of an array using recursion
#include<iostream>
using namespace std;

void printEle(int arr[], int size,int curr_index){

//base case
if(curr_index>=size){
    return ;
}


//tail recursion 
//processing
cout<<arr[curr_index];

//relation
printEle(arr,size,curr_index+1);


}

int main()
{

int arr[5]={1,2,3,4,5};
int size=5;
printEle(arr,size,0);
}