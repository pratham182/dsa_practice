#include<iostream>
#include<stack>
using namespace std;
bool isValid(string s) {
        //using stack
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]== '('|| s[i]=='{'|| s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    return false;
                }
                if(s[i]==')' && st.top()=='(' || s[i]=='}' && st.top()=='{'|| s[i]==']' && st.top()=='['){
                   st.pop();
                }else{
                    return false;
                }
            }
        }
        if(st.empty()){
            return true;
        }return false;
    }

int main()
{
cout<<isValid("{([])}");
}