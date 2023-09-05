//check prime or not

#include<iostream>
using namespace std;
string check_prime(int n){
    for(int num=2;num<n;num++){
        if(n%num==0){

            return "Not a prime";
        }
    }
    return "prime no";
}
int main(){
int num;
cin>>num;
    cout<<check_prime(num);
}