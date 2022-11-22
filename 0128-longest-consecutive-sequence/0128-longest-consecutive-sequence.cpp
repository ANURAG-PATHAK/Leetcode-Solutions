class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        if(nums.size() < 1){
            return 0;
        }
        for(auto x : nums){
            s.insert(x);
        }
        
        int ans = 0;
        int count = 0;
        auto it  = s.begin();
        vector<int> v;
        while(it != s.end()){
            v.push_back(*it);
            it++;
        }
        int prev = v[0];
        for(int i = 1; i < v.size(); i++){
            if(v[i] == prev + 1){
                count ++;
                prev = v[i];
            }
            else{
                count = 0;
                prev = v[i];
            }
            ans = max(count, ans);
        }
        return ans + 1;
    }
};