// find target in nearly sorted array
// return its index
//arr=[20,10,30,50,40,70,60]   target ==20 

#include<iostream>
#include<vector>
using namespace std;
int nearly_sorted(vector<int>nums,int target){


int start=0;
int end=nums.size()-1;
int ans;


while(start<=end){
int mid=start+(end-start)/2;
//mid mid+1 mid-1

if(target==nums[mid]){
return mid;
}
if(mid<nums.size()-1 && target==nums[mid+1]){
    return mid+1;
}
if(mid>0 && target==nums[mid-1]){
    return mid-1;
}

//if target not found
if(target>nums[mid]){
    start=mid+2;
}

else{
    end=mid-2;
}



}
return -1;
}
int main()
{
vector<int>arr={20,10,30,50,40,70,60};
cout<<nearly_sorted(arr,30);


}