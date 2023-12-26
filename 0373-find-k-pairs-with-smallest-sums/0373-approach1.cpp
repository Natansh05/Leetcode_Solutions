//original apprach to question was using max heap and doing it for k sized pq formation and until sum exceeds top element
//as array is in sorted form
//it showd=ed TLE on last test case , in most of the cases , this solution would work

class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int n= nums1.size();
        int m= nums2.size();
        // max heap to store {sum, {nums1[i], nums2[j]}}
        priority_queue< pair<int, pair<int, int>> >pq;

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                int sum= nums1[i]+ nums2[j];
                if(pq.size()<k) pq.push({sum, {nums1[i], nums2[j]}});
                else if(sum<pq.top().first) {
                        pq.pop();
                        pq.push({sum, {nums1[i], nums2[j]}});  
                }
                else if(sum>pq.top().first) break;
            }
        }
        vector<vector<int>>res;
        while(!pq.empty()) {
            auto it= pq.top();
            int n1= it.second.first;
            int n2= it.second.second;
            pq.pop();
            res.push_back({n1, n2});

        }
        return res;
    }
};
