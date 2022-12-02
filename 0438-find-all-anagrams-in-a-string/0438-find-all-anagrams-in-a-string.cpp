class Solution {
public:
    bool isanagram(vector<int> &phash, vector<int> &shash){
        for(int i = 0; i < 26; i++){
            if(phash[i] != shash[i]){
                return false;
            }
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        int k = p.size();
        vector<int> ans;
        vector<int> phash(26);
        vector<int> shash(26);
        for(auto x : p){
            phash[x - 'a']++;
        }
        if(k > s.size()){
            return ans;
        }
        for(int i = 0; i < k; i++){
            shash[s[i] - 'a']++;
        }
        for(int i = k; i < s.size(); i++){
            if(isanagram(phash, shash)){
                ans.push_back(i-k);
            }
            shash[s[i-k] - 'a']--;
            shash[s[i] - 'a']++;
        }
        if(isanagram(phash, shash)){
                ans.push_back(s.size() - k);
        }
        return ans;
    }
};