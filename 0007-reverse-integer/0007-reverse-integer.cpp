class Solution {
public:
    int reverse(int x) {
        long long rev = 0;
        int y = abs(x);
        while(y){
            rev = (10 * rev) + (y % 10);
            y = y / 10;
        }
        if(rev > INT_MAX or rev < INT_MIN){
            return 0;
        }
        
        else if(x > 0){
            return (int)rev;
        }
        else{
            return (int)-rev;
        }
        
    }
};