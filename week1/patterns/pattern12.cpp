// p ==3

/*
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     for(int i=0;i<n;i++){
        //space 
        for(int j=0;j<n;j++){
            if(j<(n-1)-i){
                cout<<" ";
            }else{
                  cout<<"* ";
             }
            
        }
         //space 
      
        
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        //space 
        for(int j=0;j<n;j++){
            if(j<i){
                cout<<" ";
            }else{
                  cout<<"* ";
             }
            
        }
         //space 
      
        
        cout<<endl;
    }
}