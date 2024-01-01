class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        ios_base::sync_with_stdio(0);
        sort(g.begin(), g.end(), greater<int>());
        sort(s.begin(), s.end(), greater<int>());
        int m = g.size(), n = s.size();
        int i = 0, j = 0;
        int ans = 0;
        while(i<m && j<n) {
            if(s[j]>=g[i]) {
                j++;
                i++;
                ans++;
            }else {
                i++;
            }
        }
        return ans;
    }
};