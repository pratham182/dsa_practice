#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int op=0;
    string str="((a+b))";
    stack<char>st;

   for(int i=0;i<str.length();i++){
    if(str[i]=='(' || str[i]=='+' || str[i]=='-' || str[i]=='*' ||str[i]=='/' ){
        //push
        st.push(str[i]);

    }else{
        while(!st.empty() && st.top()!='('){
            op=0;
            char ch=st.top();
            if(ch=='+' || ch=='*' || ch=='*' || ch=='/'){
               st.pop();
                op++;
            }


        }

        if(op>0){
           cout<<"Redant bracket";
           return 0;
        }
    }

   }
   cout<<"no redant ";

}