/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<string.h>
#include<limits.h>
#include<math.h>

using namespace std;

int myAtoi(string s) {
        bool starting =true;
        int starting_index;
        int ending_index;
        int postive_neg_status=false;
        bool entry=false;
        
        for(int i=0;i<s.length();i++){
       
            if(s[i]>='0'  && s[i]<='9'){
               if(starting){
 
                   starting=false;
                   entry=true;
                   starting_index=i;
               }
               

            }
            else if(s[i]=='-'){
              postive_neg_status=true;
            }

            else{
               if(entry){
                   ending_index=i-1;
                   break;
               }else{
                   if(s[i] >='A' && s[i]<'z' || s[i]=='.'){
                   starting_index=-1;
                   
                    return 0;
                   }
               }
              
               
            }
        }
    
    string str;
    if(starting_index != -1){
   str =s.substr(starting_index,(ending_index-starting_index)+1);}

   
   
int length=str.length();
double n;
double no=0;
for(int i=0;i<str.length();i++){
    no=no+pow(10,length-1)*(str[i]-'0');
   
   if(postive_neg_status){
       //neagtive
       n=0-no;


   } else if(postive_neg_status!=false){
       n=no;
   }

    if(n>INT_MAX){
        return INT_MAX;   
         } if(n<INT_MIN){
             return INT_MIN;
         }
    length--;
}

     
   if(postive_neg_status)
   {

     
       return 0-no; 
       
   }

   return no;

            }

int main()
{
    
    
    cout<<myAtoi("3.14159");

    return 0;
}
