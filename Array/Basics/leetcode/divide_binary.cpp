#include<iostream>
using namespace std;
int main()
{
//seeach space 
int divisor =5;
int divident=10;

int start =0;
int end=divident;


while(start<=end){
   int mid=start+(end-start)/2;  //quotint  //5 

cout<<mid*divisor<<endl; 
   if(mid*divisor == divident){
    cout<<"done";
    break;
   }else if(mid*divisor>divident){
        start=mid+1;
   }else {
    end=mid-1;
   }

}
}