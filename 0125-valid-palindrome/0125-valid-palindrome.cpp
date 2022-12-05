class Solution {
public:
    bool isPalindrome(string s) {
        int low = 0;
        int high = s.size() - 1;
        while(low < high){
            while(low < high and !isalnum(s[low])){
                low ++;
            }
            while(low < high and !isalnum(s[high])){
               high --;
            }
            if(tolower(s[low++]) != tolower(s[high--])){
                return false;
            }
        }
        return true;
    }
};