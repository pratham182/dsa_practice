#include<iostream>
#include<vector>

using namespace std;

vector<int> all(vector<int>&arr,int index,int no){
    //base case
     if(index==5){
        vector<int>result={};
        return result;
     }

     
     vector<int>resultt=all(arr,index+1,no);
     if(arr[index]==no){
       resultt.push_back(index);
       return resultt;
     }else{
        return resultt;
     }

return arr;


}
int main()
{

vector <int>arr={1,2,2,2,3,6};
vector<int> result= all(arr,0,2);

for(int i=0;i<result.size();i++){
    cout<<result[i]<<endl;
}
}