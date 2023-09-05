//print sum of even no upto n

#include<iostream>
using namespace std;

int sum_even(int n){
    int sum=0;
    for(int i=2;i<=n;i=i+2){
        sum+=i;
    }
    return sum;
}
int main(){
    cout<<sum_even(10);
}