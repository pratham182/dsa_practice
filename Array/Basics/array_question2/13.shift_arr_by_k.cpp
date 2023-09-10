//roate an array k times 

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
//aproach ist 
//times

int times;
cout<<"Enter how many times "<<endl;
cin>>times;
for(int i=0;i<times;i++){
int temp=arr[n-1];
for(int j=n-2;j>=0;j--){
    //right shift 
    arr[j+1]=arr[j];
}

arr[0]=temp;
}

for(int i=0;i<n;i++){
    cout<<arr[i];
}


}
/*

5
1
3
5
7
9
Enter how many times 
2
79135
*/

