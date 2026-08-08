
class Solution {
private:
    int heightDiff(TreeNode* root, int& diff){
        if(!root)return 0;

        int left=heightDiff(root->left, diff); 
        int right=heightDiff(root->right, diff);

        diff=max(diff, abs(left-right));

    return max(left, right)+1;     
  }

public:
    bool isBalanced(TreeNode* root) {
        int diff=0;
        heightDiff(root, diff);

     return diff<=1;      
   }
};