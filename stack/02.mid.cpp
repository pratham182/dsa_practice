#include<iostream>
#include<stack>
using namespace std;

int middle(stack<int>st,int pos){

    //base case 
    if(pos==1){
        return st.top();
    }

    pos--;
   
    
    st.pop();

    return middle(st,pos);
    
    
}

int main()
{
    stack<int>st;
    
    st.push(10);
    st.push(30);
    st.push(50);
    st.push(70);
    st.push(90);
    st.push(90);
    

    int pos;
    if(st.size()%2==0){
       pos=st.size()/2;
       
    }else{
        pos=(st.size()/2)+1;
    }

    cout<<middle(st,pos);


}