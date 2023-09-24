//binary search 

#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>nums={1,2,3,5,6,8};
int target=6;

int start=0;
int end=nums.size()-1;
int mid;
while(start<=end){
int mid=start+(end-start)/2;
    if(nums[mid]==target){
          
          cout<<"present "<<mid<<" "<<"index";
          return 0;
    }else if(nums[mid]<target){
        start=mid+1;
    }else{
   end=mid-1;
    }
}


}