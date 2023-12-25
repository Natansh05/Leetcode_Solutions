class Solution {
public:
    int getSum(int a, int b) {
        ios_base::sync_with_stdio(false);
        if(b==0)
            return a;
        if(a==0)
            return b;
        return log2(pow(2,b)*pow(2,a));
    }
};