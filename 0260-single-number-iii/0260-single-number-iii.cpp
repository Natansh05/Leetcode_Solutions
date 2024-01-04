class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        int n = nums.size();
        int XOR=0,xor1=0,xor2=0,cnt=0;

        for(int i=0;i<n;++i){
            XOR^=nums[i];
        }

        while(XOR){
            if(XOR&1)
                break;
            ++cnt;
            XOR=XOR>>1;
        }

        for(int i=0;i<n;++i){
            if(nums[i]&(1<<cnt))
                xor1^=nums[i];
            else
                xor2^=nums[i];
        }
        return {xor1,xor2};
    }
};