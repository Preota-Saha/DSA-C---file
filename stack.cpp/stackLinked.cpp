#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val):data(val),next(NULL){}
};
class stack{
    public:
    node *top;
    stack():top(NULL){}

    void push(int data){
        node*addnode= new node(data);
        addnode->next=top;
        top=addnode;
    }

     void pop(){
        top = top->next;
    }
    void Print(){
        node*current=top;
        while(current != NULL){
            cout<<current->data<<endl;
            current=current->next;
        }
        cout<<endl;
    }
};
int main()
{
    stack s1;

    cout<<"stack: "<<endl;
    s1.push(5);
    s1.push(6);
    s1.push(7);
    s1.push(8);
    s1.push(9);
    s1.Print();

    cout<<"After pop: "<<endl;

    s1. pop();
    s1.Print();
 return 0;
}