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



