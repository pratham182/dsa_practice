//https://leetcode.com/problems/valid-anagram/submissions/
//approach :
//bruteforce sort two strings and compare it if it's equal then return true else false (n log n and space o(1))
//aproach ist : through mapping (my approach)


#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;


//o(n log n) and o(1)
    bool isAnagram_usingBruteforce(string s, string t) {
        //bruteforce approach //sort 
        //approach : sort it and compare 

        sort(s.begin(),s.end());   //o(n log n)
        sort(t.begin(),t.end());
            

            //consider highest size of string


        int length;
            if(s.size()>t.size()){
                 
              length=s.size();   
            }else{
                length=t.size();
            }

        for(int i=0;i<length;i++){
            if(s[i]!=t[i]){
                return false;
            }
        }

        return true;


    }


//o(n) 0(1)
    bool isAnagram_using_map(string s, string t) {
        // through mapping

string taken1;
string taken2;
        
        if(s.length()<=t.length()){
         taken1=s;
        taken2=t;
        }else{
           taken1=t;
            taken2=s;

        }
        

 int mapping[256]={0};

    for(int i=0;i<taken1.length();i++){
                
            
                 
                 //assign mapping (count)
                 int count=mapping[taken1[i]];
                 mapping[taken1[i]]=count+1;
            
            
         }





         //access 

         for(int i=0;i<taken2.length();i++){

             if(mapping[taken2[i]]>0){
                   int value=1;
                 mapping[taken2[i]]=mapping[taken2[i]]-value;
                 
               

             }else{

                 return false;
             }
         }


         
               



         return 1;
    }

int main()
{


cout<<isAnagram_using_map("pratham","am");


}