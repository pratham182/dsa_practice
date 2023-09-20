//linear search using function


#include<iostream>
using namespace std;
bool linearSearch(int arr[],int n,int target){
for(int i=0;i<n;i++){
    if(arr[i]== target){
        return true;
    }
}
return false;    
}
int main(){

int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int target;
cout<<"Enter target element "<<endl;
cin>>target;
if(linearSearch(arr,n,target)==true){
    cout<<"Found";
}else{
    cout<<"Not found"<<endl;
}

}