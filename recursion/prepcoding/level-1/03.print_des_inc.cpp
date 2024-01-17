#include<iostream>
using namespace std;

void print_di(int n){
    //base case 
    if(n==0){
        return ;

    }
    cout<<n<<endl;
    print_di(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    print_di(n);

}