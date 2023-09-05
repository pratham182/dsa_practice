//max of 3 no
#include<iostream>
using namespace std;

char max(int a ,int b,int c){
if(a>=b && a>=c){
    return 'a'; 
}if(b>=a && c<=b){
    return 'b';
}return 'c';
}

int max_build(int a,int b,int c){
 return max(a,max(b,c));
}
int main(){
    cout<<max(1,2,1);

    //using max buildin function
    cout<<max_build(1,2,1);
}