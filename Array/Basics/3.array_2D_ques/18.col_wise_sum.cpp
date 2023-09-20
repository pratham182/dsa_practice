//find col wise sum of an 2 d array

 #include<iostream>
 using namespace std;

 int rowWiseSum(int arr[3][2],int row,int col){
    int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum+=arr[j][i];
        }
    }
    return sum;
 }
 int main()
 {
 int arr[3][2]={{1,2},{12,31},{12,10}};
  rowWiseSum(arr,3,2);
 }