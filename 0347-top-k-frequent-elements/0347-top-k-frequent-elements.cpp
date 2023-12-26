class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        unordered_map<int,int> cnt;
        int n=nums.size();
        for(int i=0;i<n;++i){
            cnt[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto &i:cnt){
            pq.push({i.second,i.first});
        }
        vector<int> ans;
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};