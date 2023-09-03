/*


numeric palidrome equilateral pyramid 
    

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<(2*n-1);j++){
            if(j>=((2*n)/2)-i && j<=((2*n)/2)+i ){
                cout<<(i+1)-j;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}