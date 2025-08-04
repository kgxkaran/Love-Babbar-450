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
