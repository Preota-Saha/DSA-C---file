#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    Node (int val):data(val),next(NULL){}
};

void traverse(Node*n){
    while(n != NULL){
        cout<<"Linked List= "<<n->data<<endl;
        n=n->next;
    }
}
int main()
{
    Node*head=new Node(3);
    Node*second=new Node(4);
    Node*third=new Node(5);

    head->next=second;
    second->next=third;
    third->next=NULL;


 //create a node
 Node *addNode=new Node(6);
 addNode->next=NULL;

 //insert at End
 Node*ptr=head;
 while(ptr->next != NULL){
    ptr=ptr->next;
 }
 ptr->next=addNode;

    
     traverse(head);

 return 0;
}