//input n and print digit from n to 1

#include<iostream>
using namespace std;

void print_digit(int no){
//base case 

if(no==0){
    return;

}

//relation
cout<<no<<endl;
print_digit(no-1);

}
int main()
{

int n=5;
print_digit(n);

}