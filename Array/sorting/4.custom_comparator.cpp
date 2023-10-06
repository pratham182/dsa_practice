
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool comp(int &a,int &b){
//return a>b; //for decreasing order
return a<b;    //for increasing order

}

//2nd use case 
bool comp2(vector <int>&a,vector<int>&b){
    return a[1]<b[1];

}
 

int main()
{

    vector<int>v={5,4,3,2,1};
    sort(v.begin(),v.end(),comp);
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<endl;
    // }

vector<vector<int>>arr={{1,2},{0,12},{0,55},{0,13},{1,98}};

sort(arr.begin(),arr.end(),comp2);

for(int i=0;i<arr.size();i++){
    for(int j=0;j<arr[0].size();j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}



}