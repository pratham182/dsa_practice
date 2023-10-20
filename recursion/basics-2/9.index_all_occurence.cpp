//print index of all occurence of target in an array
#include<iostream>
using namespace std;

void print(int arr[],int size,int curr_index,int target){

//base case 
if(size<=curr_index){
    return ;
}

if(arr[curr_index]==target){
    cout<<"Present At"<<curr_index<<"index"<<endl;
}

//recurusive realtion
print(arr,size,curr_index+1,target);



}
int main()
{

//array
int arr[5]={1,1,1,2,2};
print(arr,5,0,1);  //arr ,size and cureent index

}