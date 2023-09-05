//celiuys to kelvin scale

#include<iostream>
using namespace std;

float converter(int temp){
   return temp+ 273.15; 
}
int main(){
    float temp;
    cin>>temp;
    cout<<converter(temp);
}