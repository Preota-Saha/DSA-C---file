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
    //third->next=NULL;

   third->prev=second;
    second->prev=head;
   // head->prev=NULL;
    
    //at any point
   Node*t1,*t2;
   t1=head;
   t2=t1->next;

   while(t2->data !=40){

    t1=t1->next;
    t2=t2->next;

   }
   t1->next=t2->next;//for signlyDeletion
   t2->next->prev=t1;
   traverse(head);
 return 0;
}