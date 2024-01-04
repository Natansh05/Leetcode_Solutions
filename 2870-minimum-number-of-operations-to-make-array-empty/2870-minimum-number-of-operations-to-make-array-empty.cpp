class Solution {
public:
    int minOperations(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        int n = nums.size(),ans=0;
        unordered_map<int,int> map;
        for(int i=0;i<n;++i)
            map[nums[i]]++;
        for(auto it:map){
            if(it.second==1)
                return -1;
            ans+= it.second/3 + (it.second%3 + 1)/2;
        }
        return ans;
    }
};