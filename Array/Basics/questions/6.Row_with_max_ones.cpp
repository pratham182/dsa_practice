//https://leetcode.com/problems/row-with-maximum-ones/
//return a  row that have max no of 1 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int max=INT_MIN;   //compare max and if greater then change its value 
int indexno=0;

        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                    if(mat[i][j]==1){
                        count++;
                    }
            }
            if(max<count){
                max=count;
                indexno=i;
                
            }

        }
     
       vector<int> neww ={indexno,max};
       return neww;
    }
int main()
{
vector<vector <int>> arr={{1,1,0,1,1},{1,0,1,0,1}};
vector<int> arr2=rowAndMaximumOnes(arr);

//print 

}