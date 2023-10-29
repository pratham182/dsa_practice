#include<iostream>
using namespace std;

//class is a blueprint 
class Student{
//properties /variable /state
public:
int rollno;
int id;
string name;
int age;



//methods
void studying(){
    cout<<"Studying..";
}

};

int main()
{

//implemenmt == obejct == instance of a class
Student ob1;

//access age
//cout<<ob1.age;  //throw error becuase age is private


cout<<ob1.age;

}