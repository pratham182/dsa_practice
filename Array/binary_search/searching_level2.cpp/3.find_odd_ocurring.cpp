//https://leetcode.com/problems/single-element-in-a-sorted-array/description/
#include<iostream>
#include<vector>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;

if(nums.size()==1){
    return nums[0];
}
     int mid;
        while(start<end){
          mid=start+(end-start)/2;
         

            //even no case 
            if(mid%2==0  ){
               
            if(mid<nums.size()-1 && nums[mid]!=nums[mid+1]){
               end=mid;
            }
            
            else{
                if(mid<nums.size()-1){
                 start=mid+2;
            }}

            }
             //odd case 
            else{
                if(mid>0 && nums[mid-1]==nums[mid]){
                    start=mid+1;
                }else{
                    if(mid<nums.size()-1){
                    end=mid;
                }}
            }

             cout<<mid<<endl;
          cout<<end<<endl;
          cout<<start<<endl;

        }
        return nums[start];
    }
int main()
{

vector<int>arr={3,3,7,7,10,11,11};
cout<<singleNonDuplicate(arr);
//return index
}