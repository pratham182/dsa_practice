//check even odd using bitwise


#include<iostream>
using namespace std;

string check_even_odd(int num){
    if(num&0 == 1){
     return "odd no";
    }return "even no";
}
int main(){
    int num;
    cin>>num;
    cout<<check_even_odd(num);

}