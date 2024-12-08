#include <iostream> 
using namespace std; 
class Node{ 
public: 
    int data; 
    Node *next; 
    Node(int value) : data(value), next(nullptr) {} 
}; 
class Queue { 
private: 
    Node *front; 
    Node *rare; 
 
public: 
    Queue() : front(nullptr), rare(nullptr) {} 

    void enqueue(int data){ 
        Node *newNode = new Node(data); 
       while(front == nullptr){ 
            front = rare = newNode; 
        } 
        rare->next = newNode; 
        rare = newNode; 
    } 
    void dequeue(){ 
        front = front->next; 
    } 
    void Traverse(){ 
        Node *current = front; 
        while (current!=nullptr){ 
            cout<<current->data<<endl; 
            current = current->next; 
        } 
        cout<<endl; 
    } 
}; 
int main(){ 
    Queue q; 
    q.enqueue(11); 
    q.enqueue(12); 
    q.enqueue(13); 
    q.enqueue(14); 
    q.Traverse(); 

    cout<<"After pop: "<<endl;
 
    q.dequeue(); 
    q.Traverse(); 
    return 0; 
}