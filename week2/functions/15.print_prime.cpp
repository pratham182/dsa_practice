//all prime no from 1 to n

#include<iostream>
using namespace std;
void print_prime(int no){
    
    for(int i=2;i<=no;i++){
        bool prime=true;
        for(int j=2;j<i;j++){
            if(i%j==0){
               
                prime=false;
                break;
            }
        }
        if(prime==true){
           cout<<i<<endl;
        }
        
    }
}
int main(){
    int no;
    cin>>no;
   print_prime(no); 
}