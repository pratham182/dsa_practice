//hallow _rectangle
/*
*****
*   *
*   *
*   *
*****
 i have different approaches for that 
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    //approach 1
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(i==0 || i==(n-1)|| j==0 || j==(n-1)){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

//approach 2
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==0 || i==(n-1)){
            cout<<"*";
        }else{
            if(j==0 ||j==(n-1)){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
    }
    cout<<endl;
}
    return 0;
}