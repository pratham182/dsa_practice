#include<iostream>
#include<string.h>
using namespace std;

bool valid_palindrome(string str){
    //string str="madarrdcam";

int i=0;
int j=str.length()-1;
bool one_time=false;
while(i<j){

if(str[i]==str[j]){
i++;
j--;
}else{
    if(one_time==false){
        //left side increment
        if(str[i+1]==str[j]){
        one_time=true;
        i++;
        j--;

        }else if(str[i]==str[j-1]){
            
            one_time=true;
            i++;
            j--;
        }else{
            return false;
        }

    }else{
        return false;
    }
}
}
return true;
}
int main()
{
cout<<valid_palindrome("aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga");


}