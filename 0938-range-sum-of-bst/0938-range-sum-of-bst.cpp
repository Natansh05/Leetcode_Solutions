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
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        ios_base::sync_with_stdio(0);
        if(root==NULL)
            return 0;
        int curr = 0;
        if(root->val >= low && root->val <=high)
            curr = root->val;
        else
            curr = 0;
        int left = rangeSumBST(root->left,low,high);
        int right = rangeSumBST(root->right,low,high);
        return curr+left+right;
    }
};