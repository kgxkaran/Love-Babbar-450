1. Recursive Method :- 

  class Solution {
public:
    void postOrder(TreeNode* root,vector<int>&ans){
        if(root == NULL) return;
        postOrder(root->left , ans);
        postOrder(root->right , ans);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        postOrder(root,ans);
        return ans;
    }
};

2. Iterative method :- 

  class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>postorder;
        if(root == NULL) return postorder;

        stack<TreeNode*>st1,st2;
        st1.push(root);

        while(!st1.empty()){
            root = st1.top();
            st1.pop();
            st2.push(root);
            if(root->left != NULL){
                st1.push(root->left);
            }
            if(root->right != NULL){
                st1.push(root->right);
            }
        }
        while(!st2.empty()){
            postorder.push_back(st2.top()->val);
            st2.pop();
        }

        return postorder;


        
    }
};
