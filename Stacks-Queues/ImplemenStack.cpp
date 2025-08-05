1. Implementing Stack using arrays :- 

  #include<bits/stdc++.h>
using namespace std;
class Stack{
private:
       int arr[100];
       int top;
public:
      Stack(){
          top = -1;
      };
      void push(int x){
          if(top >= 99){
              cout << "Stack Overflow !!"<<endl;
              return;
          }
          arr[++top] = x;
      }
      void pop(){
          if(top == -1){
              cout << "Stack Underflow !!" << endl;
              return;
          }
          top--;
      }
      int peek(){
          if(top == -1){
              cout << "Stack is empty !! " <<endl;
          }
          return arr[top];
      }
      int size(){
          return top+1;
      }
      bool isEmpty(){
          if(top == -1) return true;
          return false;
      }
};

int main(){
    Stack s;
    s.push(4);
    s.push(6);
    s.push(5);
   cout << s.peek() << endl;
   cout << s.isEmpty() << endl;
   cout << s.size() << endl;    
}



2. Implement Stack using LinkedList :-

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*next;
};
class Stack{
private:
      Node*top;
public:
      Stack(){
          top = nullptr;
      };
      
      void push(int x){
          Node* newNode = new Node();
          newNode->data = x;
          newNode->next = top;
          top = newNode;
      }
      void pop(){
          if(top == nullptr){
              cout << "Stack is empty !!" <<endl;
              return;
          }
          Node*temp = top;
          top = top->next;
          delete temp;
      }
      int peek(){
          if(top == nullptr){
              cout << "Stack is empty !!" <<endl;
              return -1;
          }
          return top->data;
      }
      bool isEmpty(){
          return top == nullptr;
      }
      void display(){
          if(top == nullptr){
              cout << "Nothing to display"<<endl;
              return;
          }
          Node*temp = top;
          while(temp!=nullptr){
              cout << temp->data << endl;
              temp = temp->next;
          }
      }
      int size(){
          if(top == nullptr) return 0;
          int count = 0;
          Node* temp = top;
          while(temp!=nullptr){
              count++;
              temp = temp->next;
          }
          return count;
      }
};

int main(){
    Stack s;
    s.push(3);
    s.push(15);
    cout << "Initial size " << s.size() << endl;
    s.push(6);
    s.push(4);
    cout << "Updated size is " << s.size() << endl;
    cout << "Top element is " << s.peek() << endl;
    s.display();
}



