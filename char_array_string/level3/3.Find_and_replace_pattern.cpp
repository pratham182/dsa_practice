//https://leetcode.com/problems/find-and-replace-pattern/


#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

//using mapping

//o(n sq)

//creating mapping 


string mapping(string str){


//create mapping

char start='a';
char map[256]={0};
for(auto ch : str){
if(map[ch]==0){   //store start at str[i] location (ist a at 97 index)
    map[ch]=start;
        start++;
}

}



//assign value
for(int i=0;i<str.size();i++){
   str[i]=map[str[i]];
}




return str;



}


    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
vector<string>new_str;
        //mapping walii approach

        
   

for(int i=0;i<words.size();i++){
    
      string temp_str=words[i];
  

//cout<<words[i]<<endl;
    if( mapping(words[i])== mapping(pattern)){
      
      new_str.push_back(temp_str);
    }

    

}
       

       
        return new_str;
    }


int main()
{

//mapping
//abc == abc no 
//deq == abc no 
//mee == abb yeahh
//aqq == abb yeahh
//dkd == aba no
//ccc == aaa no
//after that match with pattern if equal then add in new vector 

    vector<string>str={"abc","deq","mee","aqq","dkd","ccc"};
    string pattern="abb";
    findAndReplacePattern(str,pattern);

}