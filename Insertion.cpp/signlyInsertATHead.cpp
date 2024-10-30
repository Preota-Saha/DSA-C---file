#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;

    Node (int val):data(val),next(NULL){}
};

void travers(Node*n){
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

    //create a new node
    Node*addNode=new Node(2);
    addNode->next=NULL;
  

    //insert at first;
    addNode->next=head;
    head=addNode;
    
    travers(head);


 return 0;
}