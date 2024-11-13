#include <iostream>
using namespace std;

class Stack {
public:
int *arr;
int capacity;
int top;

Stack(int size) {
  arr = new int[size];
  capacity = size;
  top = -1;
}

    void push(int data){
arr[++top] = data;
}
void pop(){
    top--;
}
void Traverse(){ 
        for (int i = top; i >= 0; i--) 
        { 
            cout<<arr[i]<<endl; 
        } 
        cout<<endl; 
    } 

};

int main(){
Stack st(100);
st.push(10);
st.push(20);
st.push(30);
st.push(40);
st.Traverse();

 cout<<"After pop: "<<endl;

st.pop();
st.Traverse();
return 0;
}