//print sum of daigonal element of 2d array

#include<iostream>
using namespace std;


int sumOfDiagonal(int arr[3][3],int row,int col){
    int sum=0;
    for(int i=0;i<row;i++){
    sum+=arr[i][i];
    }
    return sum;
}
int main()
{

    int arr[3][3]={{1,12,1},{1,2,1},{1,12,1}};
cout<<sumOfDiagonal(arr,3,3);

}