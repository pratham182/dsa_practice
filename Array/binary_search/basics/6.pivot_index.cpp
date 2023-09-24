//question find pivot element 
//1,2,3,8,3,2,1
//ans -==8 (max )


#include<iostream>
#include<vector>
using namespace std;
int pivot_ele(vector<int> &arr){

int start=0;
int end=arr.size()-1;
int mid;
while(start<=end){
     mid=start+(end-start)/2;
    if(start==end){   //one condition
        return start;
    }
//two cases (where pivot present )
    if(mid>0 && arr[mid]<arr[mid-1]    ){  
        return mid-1;
    }if(arr[mid]>arr[mid+1]  && mid<arr.size()-1){
     return mid;
    }
    
  //start >mid and mid>start case   
    if(arr[mid]<arr[start]){
        end=mid-1;
    }else{    //arr[mid]>arr[start]
      start=mid+1;
    }

}
return mid;  //return index

}
int main()
{
    vector <int> arr={1,2,3,4,9,1,2,3};
cout<<pivot_ele(arr);
}