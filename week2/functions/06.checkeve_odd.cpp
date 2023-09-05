//check even and odd 

#include<iostream>
using namespace std;

string check_bitwise(int no){
    if(no&1==0){
        return "even ";

    }return "odd";
}
string check(int no){
    if(no%2== 0){
        return "even"; 
    }return "odd";
}
int main(){
    cout<<check(3);

    //through bitwise 
    check_bitwise(4);
}