#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
 for(int i=0;i<n;i++)
{
cin>>arr[i];
}

int temp=arr[n-1];

for(int i=(n-2);i>=0;i--){
    arr[i+1]=arr[i];
}
arr[0]=temp;


for(int i=0;i<n;i++){
    cout<<arr[i];
}


}

// 5
// 1
// 3
// 5
// 7
// 9
// Enter how many times 
// 2
// 79135