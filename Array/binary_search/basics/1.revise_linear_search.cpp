#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector <int> arr={1,2,3,5,3,2,1};

//traverse array in linear search
bool found=false;
int target;
cin>>target;
for(int i=0;i<arr.size();i++){
    if(arr[i]==target){
        found=true;
        break;
    }
}

if(found==true){
    cout<<"Found";
}else{
    cout<<"Not found";
}



}