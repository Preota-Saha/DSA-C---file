#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*prev;
    Node(int value):data( value),next(NULL),prev(NULL){}
};
void traverse(Node*n){
    while(n !=NULL){
        cout<<"Linked List= "<<n->data<<endl;
        n=n->next;

    }
}
int main()
{ 
     Node*head=new Node(5);
     Node*second=new Node(6);
     Node*third=new Node(7);

     head->next=second;
     second->next=third;
     third->next=NULL;

    third->prev=second;
    second->prev=head;
    head->prev=NULL;

     Node*addNode=new Node(3);
     addNode->next=NULL;

     //at 1st point
     addNode->next=head;
     if(head !=NULL){
        head->prev=addNode;
    
     }
     head=addNode;
   
        
        traverse(head);
        return 0;
    }
    
  
    
