class Solution {
public:
    int numberOfBeams(vector<string>& nums) {
        ios_base::sync_with_stdio(0);
        int n = nums.size();
        int m = nums[0].size();
        int ans=0,sum=0,prev=0;
        for(int i=0;i<n;++i){
            sum=0;
            for(int j=0;j<m;++j)
                sum+=nums[i][j]-'0';
            if(sum){
                ans = ans+(prev*sum);
                prev = sum;
            }
        }
        return ans;
    }
};