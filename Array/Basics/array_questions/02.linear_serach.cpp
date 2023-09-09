//linear search in an array 
//find element using linear search from an array

#include<iostream>
using namespace std;
int main(){

    int arr[10]={1,2,1,2,1,23,10,1,2,1};
int target;

cin>>target;
int flag=false;
    for(int i=0;i<10;i++){
        if(arr[i]==target){
              flag=true;
              
        }

        
    }
    if(flag==false){
        cout<<"Not found"<<endl;
    }else{
        cout<<"Found"<<endl;
    }
}