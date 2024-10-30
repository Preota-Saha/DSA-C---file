#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value): data(value),next(NULL){}
};
Node *transvers(Node*head){
    Node*n=head;
  
    cout<<"Linked List= ";
    do{
        cout<<n->data<<endl;
        n=n->next;
    }
    while(n !=head);{
    }
}
int main()
{
    Node *head= new Node(4);
    Node *second= new Node(6);
    Node *third= new Node(5);

    head->next=second;
    second->next=third;
    third->next=head;

    transvers(head);
 return 0;
}

