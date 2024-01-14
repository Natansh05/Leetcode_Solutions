class Solution {
public:
    bool closeStrings(string word1, string word2) {
        ios_base::sync_with_stdio(0);
        vector<int> temp1(26,0);
        vector<int> temp2(26,0);
        int n = word1.size(),m=word2.size();
        if(n!=m)
            return 0;
        set<int> s1,s2;
        for(int i=0;i<n;++i){
            temp1[word1[i]-'a']++;
            temp2[word2[i]-'a']++;
            s1.insert(word1[i]);
            s2.insert(word2[i]);
        }
        if(s1!=s2)
            return 0;
        sort(temp1.begin(),temp1.end());
        sort(temp2.begin(),temp2.end());
        return temp1==temp2;
    }
};