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
  

  void reverse_stack(stack<int>&st){
    //base case 
    if(st.empty()){
        return ;
    }
     
    int temp=st.top(); 
    st.pop();

    reverse_stack(st);

    bottom(st,temp);

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
    cout<<"Before:"<<endl;
 while(!st.empty()){

        cout<<st.top()<<" ";
        
        st.pop();
    }

    cout<<endl;

     st.push(11);
  st.push(100);
  st.push(10);
    st.push(30);
    st.push(50);
    st.push(70);
    st.push(90);
    st.push(90);
    reverse_stack(st);
    cout<<"After"<<endl;
     while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}