//write a function to calaculate area of circle (pi r^2)

#include<iostream>
using namespace std;
int area_circle(int radius){
    return 3.14*radius*radius;
}

int main(){
    int r;
    cin>>r;
cout<<area_circle(r);
}