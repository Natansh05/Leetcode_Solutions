//greedy approach where we take minimum first then pop and put the next one right into the min heap;
//whenever we find a top element with index (i,j) , we check for next element in the same array and push it into heap
//and do it until size == k

class Solution {
    typedef pair<int,pair<int,int>> pi;
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        ios_base::sync_with_stdio(0);
        int n = nums1.size(), m = nums2.size();
        priority_queue<pi, vector<pi>, greater<pi>> pq;

        for(int i=0; i<m && i<k; i++) pq.push({nums1[0] + nums2[i], {0, i}});

        vector<vector<int>> ans;
        while(ans.size() < k && pq.size()) {
            auto a = pq.top(); pq.pop();
            int i = a.second.first, j = a.second.second;

            ans.push_back({nums1[i], nums2[j]});

            if(i + 1 < n) pq.push({nums1[i + 1] + nums2[j], {i + 1, j}});
        }
        return ans;
    }
};
