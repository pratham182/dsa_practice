//using biwise operator 
//approach 10  = binary 1010 (8+2)
// 1010 & 0000 -> 0000 
// num=0*10 ^0 +num(i.e 0) == 0 bit obtain
//and right shift it (so that remove last bit) 
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter decimal no";
    cin>>n;
     int number=0;
     int i=0;
    while (n>0)
    {
        /* code */

        int mod=(n&1);
         number=mod*pow(10,i++)+number;      
         n=n>>1;  
    }
    
cout<<number;
}