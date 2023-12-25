class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        int sum = 0,n= nums.size();
        int maxi = INT_MIN;
        for(int i=0;i<n;++i){
            sum+=nums[i];
            if(sum>maxi)
                maxi = sum;
            if(sum<0)
                sum=0;
        }
        return maxi;

    }
};