//Rectangle pattern 
/*
*****
*****
*****
*****
*****

*/


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter rows";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;i++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}