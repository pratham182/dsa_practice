//access modifier
#include<iostream>
#include<string.h>
using namespace std;
//as we know we born all information are private then through social media become public


class Student{
//default== private(outside this scope)
int gf;

public:  //inside this scope
int rollno;
string name;



};

int main()

{

//access modifier
//public private and protected
Student ob;
//private can't access here
//ob.gf; //error because its private

cout<<ob.rollno;



}