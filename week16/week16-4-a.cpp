//week16-4-a.cpp
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==nullptr) return 0;//需要終止條件、結束條件
        int ans1= maxDepth(root->left);
        int ans2= maxDepth(root->right);
        return max(ans1,ans2)+1;
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */