//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/


//approach ==like stack (not fully like stack)
//make a new string and add it if last character is not equal to character that you are adding 

#include<iostream>
#include<string.h>
using namespace std;




//without string 


string removeDuplicates2(string str){
int index=1;
while(index<str.length()){
    if(index>0 && str[index]==str[index-1]){
        str.erase(index-1,2);
        index--;
    }else if(str[index]==str[index+1]){
        str.erase(index,2);


    }else{
        index++;
    }
}
return str;
}


//with string 
string removeDuplicates(string str) {
        
       string s="";
       int index=0;
       while(index<str.length()){
           if(s.length()>0  && str[index]==s[s.length()-1]){

               s.pop_back();
           }else{
               s.push_back(str[index]);
           }

           index++;
       }

return s;
    }
int main()
{

cout<<removeDuplicates("abbaca");
cout<<endl<<removeDuplicates2("azxxzy");
}