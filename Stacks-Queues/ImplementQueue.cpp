1. Implement Queue using Arrays :-


#include<bits/stdc++.h>
using namespace std;
class Queue{
private:
       int arr[100];
       int capacity;
       int frontIndex,rearIndex;
public:
      Queue(){
          frontIndex = 0;
          capacity = 100;
          rearIndex = -1;
      };
      void enqueue(int x){
          if(rearIndex == 99){
              cout << "Queue Overflow !!"<<endl;
              return;
          }
          arr[++rearIndex] = x;
      }
      void dequeue(){
          if(rearIndex == -1){
              cout << "Queue Underflow !!" << endl;
              return;
          }
          frontIndex++;
      }
      int front(){
          if(frontIndex > rearIndex){
              cout << "Queue is empty !! " <<endl;
          }
          return arr[frontIndex];
      }
      int size() {
        return rearIndex - frontIndex + 1;
    }
      bool isEmpty(){
          return frontIndex > rearIndex;
      }
};

int main(){
}


2. Implement Queues using LinkedList :-

       

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*next;
    
    Node(int x){
        data = x;
        next = NULL;
    };
}
class Queue{
private:
       Node* rear;
       Node* front;
public:
       Queue(){
           rear=front=NULL;
       };
       
       void push(int x){
           Node* newNode = new Node(x);
           if(rear == NULL){
               rear = front = newNode;
               return;
           }
           rear->next = newNode;
           rear = newNode;
       }
       
       void pop(){
           if(front == NULL){
               cout << "Queue is empty !! " << endl;
               return;
           }
           Node* temp = front;
           front = front->next;
           
           delete temp;
       }
       
       int peek(){
           if(front == NULL){
               cout << "No top element !! " << endl;
               return -1;
           }
           return front->data;
       }
       
       bool isEmpty(){
           return front == NULL;
       }
}

int main(){
    Queue q;
    q.push(76);
    q.push(64);
    q.push(34);
    q.pop();
    cout << q.peek() << endl;
    cout << q.isEmpty() << endl;
}
