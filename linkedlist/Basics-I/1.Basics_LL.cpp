//Linkedlist 
//1.Collection of nodes
//2.Non contiguous memory location 
//Node== data+next(pointer) i.e address of next node

#include<iostream>
using namespace std;

class Node{
//data+next pointer
public:
int data;
Node *next;

Node(){
this->next=NULL;
};
Node(int data){
    this->data=data;
    this->next=NULL;
    
}
};

//print the element of linkedlist(singly)
void print(Node *head){
 Node *temp=head;
 while(temp!=NULL){
    cout<<temp->data;
    temp=temp->next;
 }
}

int main()
{

//creating a node statically
//Node a(10);


//dynamically
Node *first_node=new Node(10);
Node *second=new Node(1000);
Node *third=new Node(000);

Node *head=first_node;
print(head);


}