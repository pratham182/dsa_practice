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

int main()
{
     stack<int>st;
     st.push(10);
     st.push(20);
     st.push(30);
     st.push(40);

     insert(st,2);
 while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
  
}