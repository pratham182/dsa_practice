//find min no from an array 
#include<iostream>
#include<limits.h>   //for using int_max (highest no in int --> 2 power 31 -1)
using namespace std;

int main(){

int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    
}

int min =INT_MAX;
for(int i=0;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
    }
}
cout<<"minimum no in an array is "<<min<<endl;

}