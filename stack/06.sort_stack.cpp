#include<iostream>
#include<stack>
using namespace std;
void insert(stack<int>&st,int element){
    //base case 
    if(st.empty() || element>st.top()  ){
        st.push(element);
        return ;

    }
    int temp=st.top();
    st.pop();
    insert(st,element);

    //backtrack
    st.push(temp);



}
void sort(stack<int>&st){
    //base case
    if(st.empty()){
        return ;
    }

    int temp=st.top();
    st.pop();
    sort(st);

    insert(st,temp);
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
    
    cout<<"Before"<<" ";
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    st.push(11);
  st.push(100);
  st.push(10);
    st.push(30);
    st.push(50);
    st.push(70);
    st.push(90);
    st.push(90);

     sort(st);



    
     cout<<endl<<"After"<<" ";
 while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }


  
}