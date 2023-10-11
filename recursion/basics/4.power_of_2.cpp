//power of 2
//pow(n)== 2*power(n-1);


#include<iostream>
using namespace std;

int pow(int no){
    if(no==0){
        return 1;
    }


    int result=2*pow(no-1);
    return result;
}

int main()
{

cout<<pow(4);

}