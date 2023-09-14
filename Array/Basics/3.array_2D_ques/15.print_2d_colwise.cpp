//print element rcol wise
//for eg== [1,2,1,2]
//         [1,2,1,1]
//         [11,12,12,12]
//print 1 1 11 2 2 12 1 1 12 2 1 12 

#include<iostream>
#include<vector>
using namespace std;
int main()
{

    
int arr[2][2]={{1,1},{1,0}};

 for(int i=0;i<2;i++)
{


//print column wise elemwnt
for(int j=0;j<2;j++){
    cout<<arr[j][i];
}
}






}