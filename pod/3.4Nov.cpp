//https://leetcode.com/problems/last-moment-before-all-ants-fall-out-of-a-plank/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 int getLastMoment(int n, vector<int>& left, vector<int>& right) {

    //logic is that left ka min consider kiya hai jo jyada 
    //time lega or right ka max jo jyda time lega left aane meii

        //find max and min
        //left(max consider)
        int left_max=INT_MIN;
        for(int i=0;i<left.size();i++){
           if(left[i]>left_max){
               left_max=left[i];
           }
        }
     

   
     int right_min=INT_MAX;
     for(int i=0;i<right.size();i++){
           if(right[i]<right_min){
               right_min=right[i];
           }
        }

         int leftI=left_max-0;  //for left side
        int rightI=n-right_min; //for right side
        
        return max(leftI,rightI);        



    }

int main()
{

vector<int>left={4,3};
vector<int>right={0,1};
cout<<getLastMoment(4,left,right);

}