//insertion sort
#include<iostream>
#include<vector>
using namespace std;


void insertion_sort(vector<int>arr,int n){

for(int i=1;i<n;i++){
    int temp=arr[i];
    int j=i-1;
    for(j;j>=0;j--){
        if(temp<arr[j]){
            arr[j+1]=arr[j];
        }else{
            break;
        }

    }
    arr[j+1]=temp;


}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
int main()
{
vector<int>arr={5,4,3,2,1};

 insertion_sort(arr,5);   

}