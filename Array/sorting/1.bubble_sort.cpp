//bubble sort == swap its adjacent element till we get all array sorted 
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int>arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-1)-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
            
            
        }
       

    }


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "<<endl;
    }

}
int main()
{


vector<int>arr={5,4,3,2,1};
bubble_sort(arr,arr.size());




}