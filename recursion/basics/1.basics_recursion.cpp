//recursion == when function call itself directly or indirectly 
//when the solution of bdii problem depend upon the solution of chotii problem of same case
//to understnd recursion you have to first understand the recursion
//1 case tum solve kroge bkii recusion krega  

//like loe have to walk 1 step to reach its home (destination) you have to return yes if he reach home
#include<iostream>
using namespace std;
bool walk(int step){

//base case (where we have to stop)
if(step==0){
    return true;
}



//recrsiove relation
bool status=walk(--step);

cout<<status<<endl;


return status;

}




int main()
{

cout<<walk(5);  //total ten steps

}