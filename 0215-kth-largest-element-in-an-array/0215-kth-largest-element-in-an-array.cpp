class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);
        priority_queue<int,vector<int>,greater<int>> pq;
        int n = nums.size();
        for(int i=0;i<n;++i){
            if(i<k)
                    pq.push(nums[i]);
            else if(nums[i]>pq.top()){
                pq.pop();
                pq.push(nums[i]);
            }
        }
        return pq.top();
    }
};