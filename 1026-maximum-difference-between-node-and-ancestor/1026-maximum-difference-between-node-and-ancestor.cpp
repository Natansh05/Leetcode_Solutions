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
class Solution {
    private:
    int diff= 0;
    void differ(TreeNode* root,int mini,int maxi){
        if(root==0)
            return;
        diff = max(diff,max(abs(mini-root->val),abs(maxi-root->val)));
        mini = min(mini,root->val);
        maxi = max(maxi,root->val);
        differ(root->left,mini,maxi);
        differ(root->right,mini,maxi);
    }
public:
    int maxAncestorDiff(TreeNode* root) {
        ios_base::sync_with_stdio(0);
        if(root==NULL)
            return 0;
        differ(root,root->val,root->val);
        return diff;
    }
};