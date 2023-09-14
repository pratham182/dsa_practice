//linear search in 2 d array
//you have given an 2d array you can search the taget and return true if target found else false
#include<iostream>
using namespace std;

bool linearsearch(int arr[3][2],int row,int col, int target ){
 for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        if(arr[i][j]==target){
            return true;
        }
    }
 }
 return false;

}
int main()
{
int arr[3][2]={{1,2},{12,1},{12,10}};
    
cout<<linearsearch(arr,3,2,10)<<endl;
}