//write a function to print sum of 3 no
#include<iostream>
using namespace std;
//non retuen type function
void sum(int num1,int num2,int num3){
    cout<<num1+num2+num3;
}

int suM(int num1,int num2,int num3){
    return num1+num2+num3;
}
int main(){
    sum(1,2,1);

    cout<<suM(1,21,1);

}