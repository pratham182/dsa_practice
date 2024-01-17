#include<iostream>
using namespace std;
void printD(int n){
    //base case
    if(n==0){
      return;
    }
    printD(n-1);
    cout<<n<<endl;
    
}
int main()
{
int n;
cin>>n;
printD(n);

}