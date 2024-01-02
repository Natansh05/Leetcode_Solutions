class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        unordered_map<int,int>map;
        int cnt=0;
        for(auto a:nums){
            map[a]++;
            cnt = max(cnt,map[a]);
        }
        vector<vector<int>>v(cnt);
        for(auto a: map){
            for(int i =0;i<a.second;i++){
                v[i].push_back(a.first);
            }
        }
        return v;
    }
};
