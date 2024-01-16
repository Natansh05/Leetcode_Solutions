class RandomizedSet {
public:
    set<int> s;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        ios_base::sync_with_stdio(0);
        if(s.find(val)!=s.end())
            return 0;
        s.insert(val);
        return 1;
    }
    
    bool remove(int val) {
        ios_base::sync_with_stdio(0);
        if(s.find(val)==s.end())
            return 0;
        s.erase(val);
        return 1;
    }
    
    int getRandom() {
        ios_base::sync_with_stdio(0);
        int idx = rand() % s.size();
        auto it = s.begin();
        while(idx--)  
            ++it;
        
        return *it;
        //return *next(s.begin(),rand()%s.size());
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */