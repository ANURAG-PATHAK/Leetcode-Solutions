class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) 
            return false;
        vector<int> vec(26);
        for(auto letter : s){
            vec[letter - 'a']++;
        }
        for(auto letter : t){
            vec[letter - 'a']--;
        }
        for(int i = 0; i < 26; i++)
            if(vec[i] != 0)
                return false;
        return true;
    }
};