//leetcode problem :https://leetcode.com/problems/rearrange-array-elements-by-sign/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//using an array(extra array) and time compexity is 0(n) and space 0(n)
 vector<int> rearrangeArray(vector<int>& nums) {
       vector <int> vect(nums.size());
    int postive=0;   //postive 
    int negative=1;  //negative index
       for(int i=0;i<nums.size();i++){
           if(nums[i]>0){ //postive no found then add it in nums
             vect[postive]=nums[i];  
             postive+=2;
           }else{   //negative found then add it in vect  
               vect[negative]=nums[i];
               negative+=2;
           }
       }
       return vect;
    }
int main()
{

vector<int>arr={3,1,-2,-5,2,-4};
    rearrangeArray(arr);

}