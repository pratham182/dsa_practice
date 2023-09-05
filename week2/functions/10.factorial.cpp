//input a no n and return its factorial 
#include<iostream>
using namespace std;

int factorial(int no){
    int fact=1;
    while(no>1){
   fact*=no;
   no--;
    }
    return fact;
}

int main(){
    
    int no;
    cin>>no;
    cout<<factorial(no);
}