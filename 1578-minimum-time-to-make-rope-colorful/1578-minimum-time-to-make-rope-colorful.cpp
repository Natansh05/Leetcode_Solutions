class Solution {
public:
    int minCost(string colors, vector<int>& time) {
        ios_base::sync_with_stdio(0);
        int ans = 0,n=colors.size();
        for(int i=1;i<n;++i){
            if(colors[i]==colors[i-1]){
                ans += min(time[i],time[i-1]);
                time[i] = max(time[i],time[i-1]);
            }
        }
        return ans;
    }
};