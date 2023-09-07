//count all set bits from a no 
//10 -> 1010 then result will be 2
//16 -->10000b then result will be 1 

#include<iostream>
using namespace std;

int count_set_bits(int n){
int count=0;

while(n>0){
    int last_bit=n&1;
    if(last_bit==1){
        count++;
    }
    n=n>>1;
}
return count;

}
int main(){
int no;
cin>>no;
cout<<count_set_bits(no);
}