class Solution {
public:
    bool isequal(vector<char> &s, string needle){
        for(int i = 0; i < s.size(); i++){
            if(s[i] != needle[i]){
                return false;
            }
        }
        return true;
    }
    int strStr(string haystack, string needle) {
        int k = needle.size();
        if(k > haystack.size()){
            return -1;
        }
        vector<char> s;
        for(int i = 0; i < k; i++){
            s.push_back(haystack[i]);
        }
        for(int i = k; i < haystack.size(); i++){
            if(isequal(s, needle)){
                return i-k;
            }
            s.erase(s.begin());
            s.push_back(haystack[i]);
        }
        if(isequal(s, needle)){
                return haystack.size() - k;
        }
        return -1;
    }
};