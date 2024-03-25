#include<iostream>
#include<stack>
using namespace std;
  void bottom(stack<int>&st,int element){
    //base case
    if(st.empty()){
        st.push(element);
        return;
    }
     
    int temp=st.top();
    st.pop();

    bottom(st,element);
     
     //backtrack
    st.push(temp);
  }
int main()
{

 stack<int>st;
 st.push(11);
  st.push(100);
  st.push(10);
    st.push(30);
    st.push(50);
    st.push(70);
    st.push(90);
    st.push(90);
 
    bottom(st,1000);
     while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}