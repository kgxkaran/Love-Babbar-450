Recursive method :- 

  class Solution {
  public:

    // Function to return a list containing the preorder traversal of the tree.
    void preOrder(Node*root , vector<int>&ans){
        if(root == NULL) return;
        ans.push_back(root->data);
        preOrder(root->left , ans);
        preOrder(root->right , ans);
    }
    vector<int> preorder(Node* root) {
        // write code here
        vector<int>ans;
        preOrder(root , ans);
        return ans;
            
        
    }
};
