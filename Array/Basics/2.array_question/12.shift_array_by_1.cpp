//shift an array 1 times
//for eg == 1 2 3 4 5 
//output == 5 1 2 3 4

//first store last element in temp and shift all element left to right  

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

