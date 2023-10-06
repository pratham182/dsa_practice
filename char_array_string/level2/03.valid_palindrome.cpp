#include<iostream>
using namespace std;



string filter(string str){
    //convert it to lower case 

    for(int i=0;i<str.length();i++){
        if(str[i]>64 && str[i]<=90 ){
             str[i]=str[i]-'A'+'a';
        }
        else if(str[i]>=33 && str[i]<=47 || str[i]>=58 && str[i]<=64 ||
        str[i]>=91 && str[i]<=96 || str[i]>=123 && str[i]<=127){
             str[i]=' ';
        }


    }
    return str;
}
    bool isPalindrome(string s) {
      int i=0;
      int j=s.length()-1;
      s=filter(s);
      cout<<s<<endl;

      while(i<=j){
         
          if(s[i]!=' '){
              if(s[j]!= ' '  ){
                 
              if(s[i]==s[j] ){
                
                  i++;
                  j--;
              }else{
                  return false;
              }
              }else{
                  j--;
              }
          }else{
                 i++;
          }
      }

  
      return true;  
    }
int main()
{

}