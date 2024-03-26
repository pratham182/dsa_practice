#include<iostream>
#include<vector>
#include <utility>
using namespace std;

class MinStack {
public:
    
    vector<pair<int,int>>st;
    MinStack() {
        
    }
    
    void push(int val) {
        //first time push krna hai element ko
        if(st.empty()){
            pair<int,int>arr;
            arr.first=val;
            arr.second=val;
            st.push_back(arr);
        }else{    //more than one time push
             
             pair<int,int>arr;
             arr.first=val;
            arr.second=min(val,st.back().second);
            st.push_back(arr);
        } 
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
          pair<int,int>result=st.back();
        return result.first;
    }
    
    int getMin() {
        pair<int,int>result=st.back();
        return result.second;
    }
};
int main()
{
    MinStack st;
    st.push(109);

}