#include<iostream>
using namespace std;
void findpair(int arr[],int n){
    
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;  
    }
}
}



int main(){
    int n;
    cin>>n;
     int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    findpair(arr,n);

}