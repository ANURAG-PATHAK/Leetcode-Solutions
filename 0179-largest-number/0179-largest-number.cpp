class Solution {
public:
    static bool comparator(int a, int b){
        string ta = to_string(a);
        string tb = to_string(b);
        return (ta + tb) > (tb + ta);
    }
    string largestNumber(vector<int>& nums) {
        string ans = "";
        sort(nums.begin(), nums.end(), comparator);
        for(auto x : nums){
            ans += to_string(x);
        }
        int i = 0;
        while(i < ans.size() - 1 and ans[i] == '0'){
            i++;
        }
        return ans.substr(i);
    }
};