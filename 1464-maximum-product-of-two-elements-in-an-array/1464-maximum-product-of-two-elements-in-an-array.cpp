class Solution {
public:
    int maxProduct(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        int res = 0,n=nums.size();
        int curMax = nums[0];

        for (int i = 1;i<n;++i) {
            res = max(res, (curMax - 1) * (nums[i] - 1));
            curMax = max(curMax, nums[i]);
        }

        return res;        
    }
};