//https://leetcode.com/problems/climbing-stairs/

//calculate all distinct ways to reach at the destination (1 or 2 steps)
#include<iostream>
using namespace std;

int climbstair(int steps){

    //base case
    if(steps==0 || steps==1){
        return 1;
    }    
    int ans=climbstair(steps-1)+climbstair(steps-2);
    return ans;
}
int main()
{
  int steps=4;
    cout<<climbstair(steps);

}