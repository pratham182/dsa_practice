//input integers  [1,2,1];

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int convert(vector<int>arr,int size,int index,int ans,int power){
    //base case
    if(size<=index){
        return ans;
    }

    ans=ans+arr[index]*pow(10,power);

   
    return convert(arr,size,index+1,ans,power-1);
   
}
int main()
{

vector<int>arr={1,2,3};
int ans=0;
int power=arr.size()-1;
cout<<convert(arr,arr.size(),0,ans,power);

}