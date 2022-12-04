class RandomizedSet {
public:
    vector<int> ans;
    unordered_map<int, int> ump;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if (ump.find(val) != ump.end()) return false;
        ans.push_back(val);
        ump[val] = ans.size() - 1;
        return true;
    }
    
    bool remove(int val) {
        if (ump.find(val) == ump.end()) return false;
        int last = ans.back();
        ump[last] = ump[val];
        ans[ump[val]] = last;
        ans.pop_back();
        ump.erase(val);
        return true;
    }
    
    int getRandom() {
        return ans[rand() % ans.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */