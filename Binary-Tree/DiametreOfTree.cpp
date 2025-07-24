Approach 1:- 

  class Solution {
private:
    int heightOfTree(TreeNode*root){
        if(root == NULL) return 0;
        int left = heightOfTree(root->left);
        int right = heightOfTree(root->right);
        int ans = max(left,right) + 1;
        return ans;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;

        int left =  diameterOfBinaryTree(root->left);
        int right =  diameterOfBinaryTree(root->right);
        int height = heightOfTree(root->left) + heightOfTree(root->right);
        int ans = max(left , max(right,height));

        return ans;
        
    }
};


Approach 2 :- (Efficient)

  class Solution {
public:
    pair<int,int>diameterFast(TreeNode*root){
    if(root == NULL){
        pair<int,int>p = make_pair(0,0);
        return p;
    }
    pair<int,int>left = diameterFast(root->left);
    pair<int,int>right = diameterFast(root->right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second;

    pair<int,int>ans;
    ans.first = max(op1 , max(op2,op3));
    ans.second = max(left.second,right.second) + 1;

    return ans;
   }
    int diameterOfBinaryTree(TreeNode* root) {
        
        return diameterFast(root).first;
        
    }
};
