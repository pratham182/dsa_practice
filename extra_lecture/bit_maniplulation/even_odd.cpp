// 5== 101  --> if least significant bit is 1 then odd otherwise even no
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     int x=n&1;
     if(x==0){
       cout<<"Even no"<<endl;
     }else{
         cout<<"odd mo"<<endl;
     }


    return 0;
}