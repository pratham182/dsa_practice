
//https://leetcode.com/problems/sort-colors/description/

//sort 0's 1's,2's 
//approaches
//1.count 
//2.sorting 
//3.two pointer approach
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//two pointer approach 
void twopointerApproach(vector<int>arr){
     int j=4;
    int i=0;

    for(int index=0;index<5;){
       if(arr[index]==0){
        swap(arr[i],arr[index]);
        
        i++;
        index++;
       }
       else if(arr[index]==2){
        swap(arr[index],arr[j]);
        

        //index ++ //yha meii galtii kruga 
          j--;

       }else{
        index++;
       }
      
    }


    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}

void countApproach(vector <int>arr){
    //we have count these 3 and placed in array
    int zero_count=-1;
    int one_count=-1;
    int two_count=-1;
    for(int i=0;i<arr.size();i++){
     if(arr[i]==0){
        zero_count++;
     }else if(arr[i]==1){
        one_count++;
     }else{
        two_count++;
     }
    }
int no=0;
    //place in an array 
   

       int index=0; 
    while(zero_count>-1){
      arr[index]=0;
      zero_count--;
      index++;
    }
    while(one_count>zero_count){
        arr[index]=1;
        one_count--;
        index++;
    }
    while(two_count>one_count){
        arr[index]=2;
        two_count--;
        index++;
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
vector <int>arr={2,1,2,1,1,1};

countApproach(arr);
//twopointerApproach(arr);
   
}