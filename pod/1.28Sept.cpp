//question : https://leetcode.com/problems/sort-array-by-parity/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 vector<int> sortArrayByParity(vector<int>& nums) {
        int j=0;  
     int index=0;
        while(index<nums.size()){
           
           if(nums[index]%2==0){
               swap(nums[index],nums[j]);
               j++;
           }


          index++;
        }
        return nums;
    }

int main()
{
vector<int>arr={2,1,2,4,2,3};
sortArrayByParity(arr);

}