class Solution {
public:
    int singleNumber(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        int n=nums.size(),odd=0,ans=0;
        for(int i=0;i<32;++i){
            odd=0;
            for(int j=0;j<n;++j){
                if(nums[j]&(1<<i))
                    ++odd;
            }
            if(odd%3)
                ans = ans|(1<<i);
        }
        return ans;
    }
};