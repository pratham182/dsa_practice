//i/p= n 
//return sum of n no from n to 1

#include<iostream>
using namespace std;

int print_sum(int n){
//base case
if(n==0){
return 0;
}

int sum=n+print_sum(n-1);

return sum;

}
int main()
{
 cout<<print_sum(4);
}