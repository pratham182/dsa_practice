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
    int bit=no&1;
    result=result+pow(2,i++)*bit;
    cout<<result<<endl;
    no=no/10; 
}
cout<<result<<endl;
return 0;

}