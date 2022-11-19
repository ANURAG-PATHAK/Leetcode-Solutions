class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, count = 0;
        unordered_map<char,int> ump;
        for (int j = 0; j < s.size(); j++){
            ump[s[j]]++;
            if (ump[s[j]] == 2){
                int ele = s[j];
                while (ump[ele] != 1 && i < j){
                    ump[s[i]]--;
                    i++;
                }
            }
            count = max(count, j-i+1);
        }
        return count;
    }
};