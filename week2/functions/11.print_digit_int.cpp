//print digit of no i.e 6521= 6 5 2 1 print 

#include<iostream>
#include<math.h>
using namespace std;

int count(int num){
    int count=0;
    while(num>0){
        count++;
        num/=10;
    }
    return count;
}
void printdigit_from_last(int num){
while(num>0){
    int digit =num%10;
    cout<<digit<<endl;
    num=num/10;
}
};
void printdigit_from_start(int num){
    int total_digits=count(num);
    while(total_digits>0){

        int digit=num/pow(10,total_digits-1);
         cout<<digit<<endl;
         int x=(pow(10,total_digits-1));
         num%=x;

        total_digits--;
    }
}

int main(){
    int num;
    cin>>num;
printdigit_from_last(num);
printdigit_from_start(num);
}