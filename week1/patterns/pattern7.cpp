//pattern no 7
//fancy pattern 
/*

1
2*2
3*3*3
4*4*4*4
5*5*5*5*5

*/
#include<iostream>
using namespace std;
int main(){
    int n;
cin>>n;

for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        if(i>0 && j>0){
            cout<<"*"<<i+1;
        }else{
            cout<<i+1;
        }
    }
    cout<<endl;
}
}
