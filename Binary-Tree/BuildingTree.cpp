#include<bits/stdc++.h>
using namespace std;
//creating binary tree
class Node{
public: 
      int data;
      Node*left;
      Node*right;
      
      Node(int x){
          this->data = x;
          this->left = NULL;
          this->right = NULL;
      };
};
Node* buildTree(Node* root){
    
    cout << "Enter the data " << endl;
    int data;
    cin >> data;
    root = new Node(data);
    
    if(data == -1) return NULL;
    
    cout << "Enter data in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}
int main(){
    Node* root = NULL;
    root = buildTree(root);
}
