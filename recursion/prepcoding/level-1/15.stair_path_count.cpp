//nth to ground (at a time 1 or 2 step)


#include<iostream>
using namespace std;

int climbStairs(int n){

 if(n==1){
            return 1;

        }if(n==0){
            return 1;
        }

        int result=climbStairs(n-1)+climbStairs(n-2);
        return result;
}
int main()
{
int n;
cout<<"Enter n"<<endl;
cin>>n;
cout<<climbStairs(n);
}