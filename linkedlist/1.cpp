//mid of ll
#include<iostream>
using namespace std;
class Node{
public:
int data;
Node *next;
Node(){
    this->next=NULL;
}Node(int data){
    this->data=data;
    this->next=next;
}

};

void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}


void mid(Node *head){
    //length
  Node *t=head;
  int end=0; //ie count
  while(t!=NULL){
    end++;
    t=t->next;
  }
   int mid=end/2;
     
     int i=0;
     t=head;
     while(mid>i){
      t=t->next;
    
      i++;
     }
     cout<<"Mid of the linkedlist"<<t->data;
   

}

int main()
{
Node *first=new Node(10);
Node *second=new Node(100);
Node *third=new Node(1999);
Node *fourth=new Node(2099);

first->next=second;
second->next=third;
third->next=fourth;

Node*head=first;
print(head);

mid(head);
}