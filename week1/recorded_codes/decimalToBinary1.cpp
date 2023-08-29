//decimal to binary using division method 

#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int no;
    cout<<"Enter decimal no";
    cin>>no;
   int i=0;
   int number=0;
   while(no>0){
    int mod=no%2;
     number=mod*pow(10,i++)+number;    //approach == 10 -> 10%2 =0 -> number=0*10^0  +0 == 0  --> no=10/2 ==5
    no=no/2;
   }
   cout<<number;

}