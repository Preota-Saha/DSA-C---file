#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int value):data(value),next(NULL),prev(NULL){}
};
void traverse(Node *n){
    while(n !=NULL){
        cout<<"Linked List= "<<n->data<<endl;
        n=n->next;
    }
}
int main()
{
    Node *head= new Node(45);
    Node *second= new Node(40);
    Node *third= new Node(35);


    head->next=second;
    second->next=third;

    head=head->next;
    traverse(head);
    return 0;
}