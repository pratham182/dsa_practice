//not work 

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        //mapping

         int length=0;
         char mapping[256]={0};
         //store count
         for(int i=0;i<chars.size();i++){
             
             
                 //map
                          
                 mapping[chars[i]]=mapping[chars[i]]+1;
                 

             
         }


         for(int i=50;i<256;i++){
             if(mapping[i]==1){
                 length=length+1;
             }else if(mapping[i]>1){

                 length=length+2;
             }
         }
 
 for(int i=0;i<chars.size();i++){

     if(mapping[chars[i]]>1){
        // cout<<"gh";
        if(mapping[chars[i]]>9){
            int no=mapping[chars[i]];
            while(no>0){
                int mod=no%10;
                chars.insert(chars.begin()+i,'0'+mod);
                no/=10;
            }
            
        }else{
        char no='0'+mapping[chars[i]];

          chars[i+1]=no;
        mapping[chars[i]]=0;
        }
     }else if(mapping[chars[i]]==1){
         mapping[chars[i]]=0;
     }else{
         //chars.erase(chars.begin()+i);
     }

 }
         return length; 
    }
};
int main()
{


}