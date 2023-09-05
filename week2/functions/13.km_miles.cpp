// function that convert km to miles

#include<iostream>
using namespace std;

float km_miles(int dist){
    return dist/1.609;
}
int main(){
    int km;
    cin>>km;
    cout<<km_miles(km);
}

