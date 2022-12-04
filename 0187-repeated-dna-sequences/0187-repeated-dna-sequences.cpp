class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.size() <= 10){
            return {};
        }
        else{
            unordered_map<string, int> ump;
            for(int i = 0; i <= s.size()-10; i++){
                string str = "";
                for(int j = i; j < i+10; j++){
                    str += s[j];
                }
                if(ump.find(str) == ump.end()){
                    ump.insert({str, 1});
                }
                else{
                    ump[str]++;
                }
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