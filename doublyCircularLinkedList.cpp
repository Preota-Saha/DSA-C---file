#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node*prev;
    node(int value):data(value),next (NULL),prev(NULL){}

};
node*print(node*head){ //to set head  position permanently
    node*n=head;
    cout<<"LINKED LIST= "<<endl;
    do{
        cout<<n->data<<endl;
        n=n->next;
    }
     while(n !=head);{
    }
}
int main()
{
    node*head=new node(8);
    node*second=new node(9);
    node*third=new node(10);

    head->next=second;
    second->next=third;
    third->next=head;

     print(head);


 return 0;
}