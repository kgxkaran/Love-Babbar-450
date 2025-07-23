1. Recursive method :- 

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

2. Iterative method :- 

  class Solution {
public:
    vector<int>preorderTraversal(TreeNode* root){
        vector<int>preorder;
        if(root == NULL) return preorder;
        stack<TreeNode*>st;
        st.push(root);

        while(!st.empty()){
            root = st.top();
            st.pop();
            preorder.push_back(root->val);
            if(root->right != NULL){
                st.push(root->right);
            }
            if(root->left != NULL){
                st.push(root->left);
            }
        }

        return preorder;
    }

};
