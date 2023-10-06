//https://leetcode.com/problems/decode-the-message/



#include<iostream>
using namespace std;


//approach create mapping and access value through that 
 string decodeMessage(string key, string message) {
        //mapping
        char start='a';
        int length=key.length();
        char mapping[1000]={0};
               
         
         for(auto ch : key){
            if(ch!=' ' && mapping[ch]==0){
                mapping[ch]=start;
                start++;
            }
         }

//use mapping

        string str="";
        for(auto ch:message){

            if(ch == ' '){
                str.push_back(' ');
            }else{
                str.push_back(mapping[ch]);
            }
        }
        return str;
 }

int main()
{


cout<<decodeMessage("akskjfjfs","kks");


}