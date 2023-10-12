//given an array double its element of an array

#include<iostream>
using namespace std;

void double_arr (int arr[], int size,int index){

//base case 
if(size<=index){
    return ;
}

arr[index]=2*arr[index];
//realtion
double_arr(arr,size,index+1);

}

int main()
{

int arr[5]={1,2,3,4,5};
double_arr(arr,5,0);

for(auto a:arr){
    cout<<a<<endl;
}
}