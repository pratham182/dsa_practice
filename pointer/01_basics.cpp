//pointer== store the address of another varaible 
#include<iostream>
using namespace std;
int main()
{
int a=100;
int *ptr=&a;


cout<<a;
cout<<ptr;  //address of a 
cout<<*ptr; //dereference (value of a)
cout<<&ptr; //address of ptr
}