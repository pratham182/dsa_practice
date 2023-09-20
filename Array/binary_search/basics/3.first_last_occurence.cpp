
//done https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
#include<iostream>
#include<vector>
using namespace std; 


//store in a no if it's found and return last index from left and right index 
vector<int> searchRange(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;

// //left


int leftmost;
bool find=false;
        while(start<=end){
            int mid=start+(end-start)/2;

            if(nums[mid]==target){
             leftmost=mid;   
             find=true;          
             end =mid-1;
            }else if(nums[mid]<target){
                start=mid+1;
            }else{
                end=mid-1;
            }

           
        }
        if(find==false){
          leftmost=-1;
        }
        find=false;

       

start =0;
end=nums.size()-1;
int rightmost;

        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
             rightmost=mid;
             find=true;
             start=mid+1;
            }else if(nums[mid]<target){
                start=mid+1;
            }else{
                end=mid-1;
            }
            
        }
         if(find==false){
         rightmost=-1;
        }


       
        
       
     nums.clear();
     nums.push_back(leftmost);
     nums.push_back(rightmost);
    

return nums;
}

int main()
{
vector <int> arr={1,2,3,3,3,3,4,5};
//vector<int>new_arr=
searchRange(arr,3);
// for(int i=0;i<new_arr.size();i++){
//     cout<<new_arr[i]<<" ";
// }

 
}