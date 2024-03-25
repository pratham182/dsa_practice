#include<iostream>
using namespace std;
class stack{
    public:
    int *arr;
    int size;
    int top;
    stack(int size){
      arr=new int[size];
      this->size=size;
      this->top=-1;


    }

    void push(int data){
        //check overflow condition
        if(top==size-1){
           cout<<"Nothing can be push";
           
        }else{


        top++;
        
        arr[top]=data;}
    }


    void pop(){
        //underflow condition 
        if(top==-1){
            cout<<"Can't pop underflow"<<endl;

        }else{
            --top;
        }
    }

    bool isEmpty(){
        if(top==-1){
            cout<<"Stack is empty";
            return true;
        }else{
            cout<<"No stack is not empty";
            return false;
        }
    }


    int getTop(){
        if(top==-1){
            return -1;
        }else{
            return arr[top];
        }
    }

    int getSize(){
        return top+1;
    }

    void print(){
        for(int i=0;i<getSize();i++){
            cout<<arr[i]<<",";
        }
    }


};
int main()
{
    stack st(9);
    st.push(100);
    st.push(199);
    st.print();


}