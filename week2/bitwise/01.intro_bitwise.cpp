//bitwise == most important for interviews 
//works on bit level (0 or 1).bit level operations
//and ,or ,not, xor 


#include<iostream>
using namespace std;
int main(){
    // signed int a=-8;
    // cout<<a;

    // 3 == 00000000 00000000 00000000 00000011
    // -5== 00000000 00000000 00000000 00000101  ->(2's ) -> 11111111 11111111 11111111 11111011 
    //                                                       00000000 00000000 00000000 00000011
    //                                                      11111111 
                                            \


signed a=-6;
cout<<endl <<(a<<1);
 

 bool x=0;   //0 = 0000000 -> 11111111 -> 00000000+1 -> 00000001
cout<<~x;      


bool xo=1;  //1 == 00000001 -> 11111110 -> (2's ) -> 00000001+1 --> 10
cout<<~xo;


int num1=10;
int num2=11;  
cout<<endl << (num1 & num2);  // 10 --> 00000000 00000000 00000000 000001010
                      //11  --> 00000000 00000000 00000000 000001011
                    //result -->00000000 00000000 00000000 000001010


                   
 }
