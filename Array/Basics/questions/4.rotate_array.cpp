//https://leetcode.com/problems/rotate-array/
//approach (k times)
//using temp variable
//using mod 



//using mod approach 
//[1,3,1,1,2,1]  k=2 

//output  [2,1,1,3,1,1];
//arr[0]==i+2==2
//arr[1]==i+2 ==3
//arr[2]==i+2 ==4
//arr[3]==i+2==5
//arr[4]==(i+2)-n
//arr[5]==(i+2)-n



#include<iostream>
#include<vector>
using namespace std;



void rotate(vector<int>arr,int k){
   int n=arr.size();
    vector<int>newarr(n);
    for(int i=0;i<arr.size();i++){
        int index=(i+k)%n;
        newarr[index]=arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<newarr[i]<<endl;
    }
}
//array out of bound error 
//  void rotate(vector<int>& nums, int k) {
//         vector <int> arr(nums.size());

// int n=nums.size();
//         for(int i=0;i<nums.size();i++){
//             if(i+k>=n){
//              arr[(i+k)-n]=nums[i];
//             }else{
//             arr[(i+k)]=nums[i];
//             }
//         }
//         nums=arr;
// for(int i=0;i<n;i++){
//     cout<<nums[i]<<endl;
// }
//     }
int main()
{
vector<int > arr={1,2,3,4,5};
rotate(arr,2);

}
