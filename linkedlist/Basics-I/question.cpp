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
    while(head!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}


Node* delete_node(Node *head,int value){
   //3 case ho skte hai 
   //begin se 
   //mid se
   //and last se

   Node *previous=NULL;
   Node *current=head;
    int i=0;
   while(current!=NULL){
     //found
    if(current->data==value){
     if(previous==NULL){ //previous null pr hai
        //starting se
        
    head=current->next;
    //current->next=NULL;
    delete current;
    current=head;

     }else{
        //if not first postion
       
       previous->next=current->next;
       //current->next=NULL;
          delete current;
       current=previous->next;
       
     }
     
     
     
     }else{
         previous=current;
        current=current->next;
       
     }
     
     
      i++;
   }

   return head;

}
int main()
{

Node *first=new Node(1);
Node* second=new Node(2);
Node *third=new Node(3);
Node *fourth=new Node(2);
Node *fifth=new Node(5);

Node *head=first;
first->next=second;
second->next=third;
third->next=fourth;
fourth->next=fifth;

Node *temp=delete_node(head,2);

print(temp);

}