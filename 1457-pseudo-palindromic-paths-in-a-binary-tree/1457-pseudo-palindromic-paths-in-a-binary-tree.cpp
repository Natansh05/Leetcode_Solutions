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
    void psuedo_cnt(TreeNode* root,vector<int> &n,int &cnt){
        if(root==NULL)
            return;
        n[root->val]++;
        psuedo_cnt(root->left,n,cnt);
        psuedo_cnt(root->right,n,cnt);

        if(root->left == NULL && root->right==NULL){
            int flag=0;
            for(int i=0;i<10;++i)
                if(n[i]&1)
                    ++flag;
            if(flag==0 || flag==1)
                ++cnt;
        }
        n[root->val]--;
    }
public:
    int pseudoPalindromicPaths (TreeNode* root) {
        ios_base::sync_with_stdio(0);
        int cnt = 0;
        vector<int> n(10,0);
        psuedo_cnt(root,n,cnt);
        return cnt;
    }
};