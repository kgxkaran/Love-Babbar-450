1. Recursive method:- 

  class Solution {
public:
    void inOrder(TreeNode* root,vector<int>&ans){
        if(root == NULL) return;
        inOrder(root->left,ans);
        ans.push_back(root->val);
        inOrder(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        inOrder(root,ans);
        return ans;
    }
};

2. Iterative method:-

  class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
       stack<TreeNode*>st;
       TreeNode* temp = root;
       vector<int>inOrder;

       while(true){
        if(temp!=NULL){
            st.push(temp);
            temp = temp->left;
        }
        else{
            if(st.empty() == true) break;
            temp = st.top();
            st.pop();
            inOrder.push_back(temp->val);
            temp = temp->right;
        }
       }

       return inOrder;

    }
};
