class Solution {
public:
    int rec( int idx , vector<vector<int>>&jobs , vector<int>&startTime , vector<int>&dp)
    {
        if( idx >= startTime.size())
            return 0;
        if(dp[idx] != -1)
            return dp[idx];
        int nextIndex = lower_bound(startTime.begin() , startTime.end() , jobs[idx][1])-startTime.begin();
        int take = jobs[idx][2] + rec( nextIndex , jobs , startTime , dp);
        int notTake = rec( idx + 1 , jobs , startTime , dp);
        return dp[idx] = max( take , notTake);
    }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        ios_base::sync_with_stdio(0);
        vector<vector<int>>jobs;
        int n = startTime.size();
        vector<int>dp( n , -1);
        for( int i = 0 ; i < startTime.size() ; i++)
             jobs.push_back({ startTime[i] , endTime[i] , profit[i]});

        sort(jobs.begin() , jobs.end());
        sort(startTime.begin() , startTime.end());
        return rec( 0 , jobs , startTime , dp);
    }
};