//problem == convert a matrix in that below  form
/*
[1,2,3]    ->>   [1,4,7]      (row is converted to column or we can say column into row)     
[4,5,6]    ->>   [2,5,8] 
[7,8,9]    ->>   [3,6,9]

*/

//approach is to swap with col to row
//square matrix

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
int n;
cin>>n;
   vector<vector<int>> arr(n, vector<int>(n));

 for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++){

cin>>arr[i][j];
}}



for(int i=0;i<n;i++){

for(int j=i;j<n;j++){
    swap(arr[i],arr[j]);
}
}



for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j];
    }
    cout<<endl;
}
}