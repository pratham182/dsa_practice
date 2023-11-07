//insertion in singly linkedlist 
//1.through begining 
//2.through end(tail)
//3.from any postion


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
 

 
void print(Node *head){



Node *temp=head;
while(temp!=NULL){
  cout<<temp->data<<"->";
  temp=temp->next;
}

cout<<endl;


}

int length(Node *head){
  Node *temp=head;
  int count=0;
  while(temp!=NULL){
 count++;

 temp=temp->next;
  }

  return count;
}


Node *insert_at_head(Node * &head,int data){


//empty case edge case
//if head==Null




  //create a new node 
  Node *newNode=new Node(data);
  
  //adding head to new node next
  newNode->next=head;

  //change head to newNode
  head=newNode; 

  return head;


}

//insert at tail
Node * insert_at_tail(Node *&head,Node *tail,int data){

//two method 
//using head =traverse whole list 
//using tail = withpout traversing it

//using tail
// create new Node
// Node *new_node=new Node(data);
// tail->next=new_node;
// tail=new_node;



//using head

if(head==NULL){
  //create new node
  Node *new_node=new Node(data);
  head=new_node;
  tail=new_node;

  return head;
}
Node *temp=head;
while(temp->next!=NULL){
  temp=temp->next;

}

Node *new_node=new Node(data);
temp->next=new_node;
tail=new_node;

return head;

}


void insert_at_any_postion(Node *&head,Node* &tail,int data,int pos){

//cases 
//if pos >=1 then at head



if(pos<=1){
  insert_at_head(head,data);
  return ;

}

//if pos>1 and pos <length

if(pos>1 && pos<=length(head)){
  //logic
  Node *new_node=new Node(data);
  Node *pre=NULL;
  Node *curr=head;
  
  while(pos!=1){
     pre=curr;
     curr=curr->next;
     pos--;
  }
  //insert that node between these nodes
  pre->next=new_node;
  new_node->next=curr;

}




//if pos>lenght then at tail

if(pos>length(head)){
  insert_at_tail(head,tail,data);
}

}

int main()
{
//insertion at beginning
Node *first=new Node(10);
Node *second=new Node(109);

first->next=second;
Node *head=first;
Node *tail=second;


// Node *ans_node=insert_at_head(head,10);
Node *ans_node=insert_at_tail(head,tail,18);
print(ans_node);

//insert at any postion 
// head=NULL;
// tail=NULL;
insert_at_any_postion(head,tail,101,76);
print(head);

}