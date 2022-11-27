class Solution {
public:
    int minSwaps(string s) {
        int count = 0;
        int maxi = 0;
        for(auto x :s){
            if(x == ']'){
                count += 1;
            }
            else{
                count -= 1 ;
            }
            maxi = max(maxi, count);
        }
        return (maxi + 1) / 2;
    }
};