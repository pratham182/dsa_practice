#include<iostream>
#include<stack>
using namespace std;

void deleteMid(stack<int>&st,int pos){
    //base case 
    if(pos==1){
        cout<<st.top()<<endl;
        st.pop();
        return ;

    }

    pos--;
    int temp=st.top();
    st.pop();

    deleteMid(st,pos);

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
    

    int pos;
    cout<<st.size()<<endl;
    if(st.size()%2==0){
       pos=st.size()/2;
       
    }else{
        pos=(st.size()/2)+1;
    }
    deleteMid(st,pos);

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
 
}