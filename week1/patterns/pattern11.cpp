//p2 ==inverted full pramid 


/*

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
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<n-1-i;j++){
    //        cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            if(j<i){
            cout<<" ";
            }else{
                  cout<<"*";
            }
           
        }
        cout<<endl;
    }
}