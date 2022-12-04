class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.size() <= 10){
            return {};
        }
        else{
            unordered_map<string, int> ump;
            for(int i = 0; i < s.size()-9; i++){
                ump[s.substr(i, 10)]++;
            }
            vector<string> ans;
            for(auto x : ump){
                if(x.second > 1){
                    ans.push_back(x.first);
                }
            }
            return ans;
        }
    }
};