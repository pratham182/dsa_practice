//constructor

#include<iostream>
using namespace std;

class Student{
public:
int rollno;
string name;
int age;

Student(){  //default constructor and assign garbage value to its variable 
    cout<<"hello student"<<endl;
}


//param. constructor
Student(int age,string name,int rollno){
//this == invisible pointer variable private in nature for pointing to the current object
this->name=name;
this->age=age;


}

};

int main()
{

//add own if no constructor
//method within class they invoke automatically when we create an object
//no return type
//can multiple based on parameter
//default or parametrized constructor

Student stu(1,"pratham",88);
Student s();

}