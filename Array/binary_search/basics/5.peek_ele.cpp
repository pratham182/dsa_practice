//find peek element in a moutain array 


// https://leetcode.com/problems/find-peak-element/submissions/
#include<iostream>

#include<vector>
using namespace std;


//using mid+1 approach
int findPeakElement(vector<int>& arr) {
        //similar question
        int start=0;
        int end=arr.size()-1;

        while(start<end){
            //find mid
            int mid=start+(end-start)/2;
            if(arr[mid]>arr[mid+1]){  
                end=mid;
            }else{    //arr[mid]<arr[mid+1]
                start=mid+1;
            }
        }
        return start;
    }


//mid -1 approach 
    int findPeakElement_throght_m_minus_1(vector<int>& arr) {
        //similar question
        int start=0;
        int end=arr.size()-1;


//corner cases 
//1.array out of range when two element 
        while(start<end){
            //find mid
            int mid=start+(end-start)/2;

            if(end-start ==1 ){
                if(arr[start]>arr[end]){
                    return start;
                }return end;
            }
            if(arr[mid]>arr[mid-1]){
                start=mid;
            }else{    //arr[mid]<arr[mid-1]
                end=mid-1;
            }
        }
        return start;
    }
int main()
{

vector<int> arr={1,2,3,4,7,4,3,2,1};
findPeakElement_throght_m_minus_1(arr);
findPeakElement(arr);
}