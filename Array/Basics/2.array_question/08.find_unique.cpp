//find unique element 
#include<iostream>
using namespace std;
int main(){
int n=5;
int arr[n]={6,8,6,1,1};
int res=0;

for(int i=0;i<n;i++){
   res^=arr[i];   //through xor if element is same then it's get cancel 
}
cout<<res;
     
}