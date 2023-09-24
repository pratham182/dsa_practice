//find the target in 2d matrix using binary search 
//https://leetcode.com/submissions/detail/1052939959/

#include<iostream>
#include<vector>
using namespace std;


bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row_size=matrix.size(); //3
        int col_size=matrix[0].size(); //4

        //formula == index+1/(row or column size)
        int start=0;
        int end=(row_size*col_size)-1;  //11
        
int mid;
int mid_row_index;
int mid_col_index;
        while(start<=end){   //0 11
         mid=(start+end)/2;  //5
            
            mid_row_index=((mid)/col_size);   
            mid_col_index=mid-(col_size*mid_row_index) ;  //
//cout<<mid_row_index<<mid_col_index;
            mid_col_index=mid%col_size;



            if(matrix[mid_row_index][mid_col_index]==target){
                return true;
            }else if(matrix[mid_row_index][mid_col_index]>target){
                end=mid-1;
            }else{
                start=mid+1;
            }
            
         
        }
        return false;


        
    }
int main()
{
  vector<vector<int>> vect={{1,2,3,4},{6,7,8,9}};
  cout<<searchMatrix(vect,2);


}