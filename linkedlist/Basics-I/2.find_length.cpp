//find length of singly linkedlist

#include<iostream>
using namespace std;
 class Node{
    public:
  int data;
  Node *next;

  Node(int data){
    this->data=data;
    this->next=NULL;
  }
 };


int getLength(Node *head){
    //find the lenght of linkedlist
     int count=0;
    //traverrse a linkedlist
    Node *temp=head;
    while(temp!=NULL){
      count++;
       temp=temp->next;
    }

    return count;
    
}
int main()
{

Node *first=new Node(10);
Node *second=new Node(1000);
Node *third=new Node(197);

Node *head=first;
first->next=second;
second->next=third;

cout<<getLength(head);


}