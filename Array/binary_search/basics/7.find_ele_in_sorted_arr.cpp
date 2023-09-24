//https://leetcode.com/problems/search-in-rotated-sorted-array/
//new variety of previous questions


//find peak element and apply binary search on both side 
#include<iostream>
#include<vector>
using namespace std;



//finding pivot index 
int pivot_ele(vector<int> &arr){

int start=0;
int end=arr.size()-1;
int mid;
while(start<=end){
     mid=start+(end-start)/2;
    if(start==end){
        return start;
    }if(mid>0 && arr[mid]<arr[mid-1]    ){    //edge case (array out of bound  mid>0)
        return mid-1;
    }if(arr[mid]>arr[mid+1]  && mid<arr.size()-1){
     return mid;
    }if(arr[mid]<arr[start]){
        end=mid-1;
    }else{    //arr[mid]>arr[start]
      start=mid+1;
    }

}
return mid;  //return index

}
    int search(vector<int>& arr, int target) {
        //find pivot element 
               int pivot=pivot_ele(arr);
               
               int start;
               int end;
       if(target>=arr[0] && target<=arr[pivot] ){
           start=0;
           end=pivot;     
    }
    else{
        start=pivot+1;
        end=arr.size()-1;
    }

//binary seach
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]>target){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return -1;
    }
int main()
{

    vector <int>arr={4,5,6,7,0,1,2};

//print its index
cout<<search(arr,0);


}