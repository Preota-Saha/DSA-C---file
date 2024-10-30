#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int val):data(val),next(NULL){}
};

void travers(Node*n){
    while(n !=NULL){
        cout<<"Linked List= "<<n->data<<endl;
        n=n->next;
    }

}
int main()
{
    Node*head=new Node(3);
    Node*second=new Node(5);
    Node*third=new Node(8);

    head->next=second;
    second->next=third;
    third->next=NULL;

    Node*addNode=new Node(9);
    addNode->next=NULL;

    //at any point
    Node*ptr=head;
    while(ptr->data != 5){
        ptr=ptr->next;
    }
    addNode->next=ptr->next;
    ptr->next=addNode;

    travers(head);

    
 return 0;
}