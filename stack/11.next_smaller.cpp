#include<iostream>
#include<vector>
using namespace std;
int main()
{


vector<int>arr={2,1,4,6,3};
//bruteforce approach
 int min;
for(int i=0;i<arr.size();i++){
    min=arr[i];
  for(int j=i+1;j<arr.size();j++){
    if(min>arr[j]){
        min=arr[j];
    }

  }
  if(min==arr[i]){
    arr[i]=-1;
  }else{
    arr[i]=min;
  }
  
}

for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<endl;
}
}