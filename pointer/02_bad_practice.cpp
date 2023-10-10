#include<iostream>
using namespace std;
int main()
{


//decalration of pointer === always a bad practice 
//don't do
int *ptr; 
//cout<<ptr; //garbage value // segmentation fault because program is pointer to ilegal mem address 
//program not allowed

//always do
//in this case assign it to null pointer
int *p=0;
cout<<p;



}