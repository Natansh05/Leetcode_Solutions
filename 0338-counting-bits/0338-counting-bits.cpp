class Solution {
public:
    vector<int> countBits(int n) {
        ios_base::sync_with_stdio(0);
        vector<int> dp(n+1,0);
        int num=0,cnt=0;
        for(int i=0;i<=n;++i){
            num=i;cnt=0;
            while(num){
                num = num & (num-1);
                ++cnt;
            }
            dp[i]=cnt;
        }
        return dp;
    }
};