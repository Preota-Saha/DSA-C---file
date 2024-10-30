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

    //deletio0n at tail
    Node *t1,*t2;
    t1=head;
    t2=head->next;
    

    while(t2->next != NULL){
        t1=t1->next;
        t2=t2->next;

    }
    t1->next=NULL;
    traverse(head);

    return 0;
}