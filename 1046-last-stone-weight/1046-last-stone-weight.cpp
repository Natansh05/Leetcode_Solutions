class Solution {
public:
    int lastStoneWeight(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        priority_queue<int> pq;
        int n=nums.size(),top1,top2;
        for(int i=0;i<n;++i){
            pq.push(nums[i]);
        }
        while(pq.size()>1){
            top1 = pq.top();
            pq.pop();
            top2 = pq.top();
            pq.pop();
            if(top1-top2)
                pq.push(top1-top2);
        }
        if(pq.empty())
            return 0;
        return pq.top();
    }
};