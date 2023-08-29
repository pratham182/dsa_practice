//binary to decimal == eg 1010 = 10
// 1010 %10 ==0 
// 2^0 *0 +no(0)


#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int no;
cout<<"Enter binary no";
cin>>no;
int result=0;
int i=0;
while(no>0){
    int bit=no%10;
    result=result+pow(2,i++)*bit;
    no=no/10; 
}
cout<<result<<endl;
return 0;
}