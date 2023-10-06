//https://leetcode.com/problems/monotonic-array/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isMonotonic(vector<int>& nums) {
    
        //check while moving  increaing order follow
        //detect krna hai kiii array monotone increasimng hai ya decraesing 
        bool detect;
         int i=0;
        while(i<nums.size()-1){
            if(nums[i]>nums[i+1]){
                //decending order meii hai
                detect=0; //decending order case 
                  break;
            } else if(nums[i]<nums[i+1]){
                detect=1; //ascending order
                break;
            }else{
                //equal case

                i++;
            } 
        }

        for(int i=0;i<nums.size()-1;i++){
            //descending order case
            if(detect==0){
                if(nums[i]>=nums[i+1]){
                    //move forword
                }else{
                    return false;
                }
            }
            else{
                if(nums[i]<=nums[i+1]){
                    //move forword
                }else{
                    return false;
                }
            }
        }



        return true;
    }
int main()
{
    vector<int>arr={1,2,2,3};
isMonotonic(arr);
}