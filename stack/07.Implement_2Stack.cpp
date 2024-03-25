//implement two stack in an array
#include<iostream>
using namespace std;
class stack{
public:
int *arr;
int size;
int top1;
int top2;

stack(int size){
    arr=new int[size];
      this->size=size;
      this->top1=-1;
      this->top2=size;

};

void push1(int data){

  //overflow condition
  if(top1==top2-1){
    cout<<"Stack 1 is full !! can't push anthing on this stack";
    return ;
  }
  top1++;
  arr[top1]=data;
  

}

void push2(int data){
//overflow condition
if(top1==top2-1){
    cout<<"Stack 1 is full !! can't push anthing on this stack";
    return ;
  }

top2--;
arr[top2]=data;
}

void pop1(){
  //underflow condition
  if(top1==-1){
    cout<<"Can't pop anthing because stack is empty";
    return ;
  }

  arr[top1]=0;
  top1--;
}

void pop2(){

 //underflow condition
  if(top2==size){
    cout<<"Can't pop anthing because stack is empty";
    return ;
  }
  arr[top2]=0;
  top2++;

}

void print(){
    for(int i=0;i<size;i++){
     cout<<arr[i]<<" ";
    }
}
};


int main()
{
    stack sta(5);
    sta.push1(10);
    sta.push2(1000);
    sta.push1(192);
    sta.print();
 
}