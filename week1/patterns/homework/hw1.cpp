/*

1
1 2
1  3
1   4
12345

*/


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0 || i==n-1 || i>0 && j==i+1){
                cout<<j+1;

            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}