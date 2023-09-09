//count 0 and 1's in an array

#include<iostream>
using namespace std;

int main(){
int count0=0;
int count1=0;
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==0){
        count0++;
    }else if(arr[i]==1){
        count1++;
    }
}
cout<<count0<<endl<<count1<<endl;



}