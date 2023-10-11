//factorial of a no using recursion


//factorial(5)= 5*factorial(4);

#include<iostream>
using namespace std;

int factorial(int n){

    //base case
    if(n==1  ||n==0){
        return 1;
    }



//recrsive realtion
    int ans= n*factorial(n-1);

    //processing 
   cout<<ans<<endl;
    return ans;


}
int main()
{

    int n=5;
    cout<<factorial(n);

}