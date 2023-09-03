//p1 == pyramid 

/*

    * 
   * * 
  * * * 
 * * * * 
* * * * * 

*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<2*(n-1)+1;j++){
    //         //mid - (row-1) mid -row+1

    //         if(j>(2*(n-1)/2)-(i+1)  && j<(2*(n-1)/2)+(i+1)){
    //             if(i%2==0 && j%2==0 || i%2==1 && j%2==1){
    //                 cout<<"*";
    //             }else{
    //                 cout<<" ";
    //             }
                
    //         }else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // for(int i=0;i<n;i++){
    //     //space 
    //     for(int j=0;j<(n-1-i);j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i+1;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


     for(int i=0;i<n;i++){
        //space 
        for(int j=0;j<n;j++){
            if(j<(n-1)-i){
                cout<<" ";
            }else{
                  cout<<"* ";
             }
            
        }
        
        cout<<endl;
    }
}