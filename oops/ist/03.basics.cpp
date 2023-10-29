//size of class+ padding concept

#include<iostream>
#include<string.h>
using namespace std;

class Student{

//empty class


};

class Student1{
//non empty class
int roll_no;

};


class Student2{
//non empty 


//doudt
string name;  //32
int age;


};

int main()
{

Student stu;
cout<<sizeof(stu)<<endl; //empty class (1 byte for smallest addressable memory)

Student1 stu1;
cout<<sizeof(stu1)<<endl;   //return 4

Student2 stu2;
cout<<sizeof(stu2);



}