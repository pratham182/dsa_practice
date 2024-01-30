//find max from an array
#include<iostream>
using namespace std;

int max(int arr[],int index){
    //base case
    if(index==4){
        return arr[index];
    }
    int misa=max(arr,index+1);
    if(misa>arr[index]){
        return misa;
    }else{
        return arr[index];
    }
}

int main()
{
int arr[5]={1,2,3,4,5};
cout<<max(arr,0);

}