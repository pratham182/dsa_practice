//get maze problem
#include<iostream>
using namespace std;

int solution_maze(int m,int n,int x ,int y){
        //base case
         if(m-1==x ){
           return 1;
         }
         if(n-1==y){
             return 1;
         }
         //faith
        int result=solution_maze(m,n,x+1,y);
        int result2=solution_maze(m,n,x,y+1);
        return result+result2;
    }
int main()
{
 cout<<solution_maze(3,1,0,0);


}