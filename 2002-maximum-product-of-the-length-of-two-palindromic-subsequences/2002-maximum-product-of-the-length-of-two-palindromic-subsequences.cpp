class Solution {
public:
    int maxProduct(string s) {
        int n = s.size();
        int bitmask = (1 << n) - 1;
        unordered_map<int, int> ump;
        for(int i = 0; i < bitmask; i++){
            string str = "";
            for(int j = 0;j < n; j++){
                if((i & (1 << j))){
                    str += s[j];
                }
            }
            string str1(str);
            reverse(str.begin(), str.end());
            if(str == str1){
                ump[i] = __builtin_popcount(i);
            }
        }
        int maxi = 0;
        for(auto x : ump){
            for(auto y : ump){
                if(x != y){
                    if((x.first & y.first) == 0){
                        maxi = max(maxi, x.second * y.second);
                    }
                }
            }
        }
        return maxi;
    }
};