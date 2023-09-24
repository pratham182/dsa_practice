//find mising element in sorted array 
//eg = 1 2 3 4 6 7 8 9 
//ans== 5

//approaches
//1. xor (o(n))
//2. sum
//3.binary search (o(log n))


#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector <int> arr={0,1,2,3,4,6,7,8};



int start=0;
int end=arr.size()-1;
int store;

while(start<=end){
    

int mid=start+(end-start)/2;


if(arr[mid]-mid==0){
    start=mid+1;
}else if(arr[mid]-mid==1){
    //store
    store=arr[mid];
    end=mid-1;
}



}
// 
cout<<store-1<<endl;


}