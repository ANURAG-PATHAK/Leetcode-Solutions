class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for(auto x : s){
            if(isalnum(x)){
                ans += tolower(x);
            }
        }
        string rev = ans;
        reverse(rev.begin(), rev.end());
        return rev == ans;
    }
};