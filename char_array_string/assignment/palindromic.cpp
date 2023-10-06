#include<iostream>
#include<string.h>
#include<limits.h>
using namespace std;
string palindrome(string s,int start,int end){
string new_string="";
bool yes_palindrom=false;
    while( start>=0 && end<s.length() &&  s[start]==s[end]){
       start--;
       end++;

       yes_palindrom=true;
    }

    if(yes_palindrom==true){
         new_string=s.substr(start+1,((end-1)-(start+1))+1);
      
    }

 
      
    return new_string;
}
    string longestPalindrome(string s) {
        //hp jayega 
   int max=INT_MIN;
   
   string str=" ";
        for(int i=0;i<s.length();i++){
            //odd case
        
            string odd_case=palindrome(s,i,i);
           
            int length_odd=odd_case.length();
            if(length_odd > max){
                
                max=odd_case.length();
                str=odd_case;
            } 
            string even_case=palindrome(s,i,i+1);
            // cout<<"even"<<" " <<even_case.length()<<endl;
                //  cout<<even_case<<endl;
                int length_even=even_case.length();
            if(length_even > max){
            //  cout<<"he";
                max=even_case.length();
                str=even_case;

            }
            
        }
       
       return str; 
    }
int main()
{
cout<<longestPalindrome("babad");
}