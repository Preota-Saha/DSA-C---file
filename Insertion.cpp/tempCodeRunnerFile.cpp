#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node*prev;
    Node(int val): data(val),next(NULL),prev(NULL){}
};
void travers(Node *n){
    while( n!=NULL){
        cout<<"LINKED LIST= "<<n->data<<endl;
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

    third->prev=second;
    second->prev=head;
    head->prev=NULL;

//create Node
    Node*addNode=new Node(8);
    addNode->next=NULL;

//at any point
Node*ptr=head;
while(ptr->data !=4){
    ptr=ptr->next;
}
addNode->next=ptr->next;
addNode->prev=ptr;
//ptr->next->prev=addNode; or=40
ptr->next=addNode;
addNode->next->prev=addNode;
travers(head);




 return 0;
}