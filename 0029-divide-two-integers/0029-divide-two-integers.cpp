class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        long div = labs(dividend), divi = labs(divisor), ans = 0;
        int sign = dividend > 0 ^ divisor > 0 ? -1 : 1;
        while(div - divi >= 0){
            int count = 0;
            while(div - (divi << 1 << count) >= 0){
                count++;
            }
            ans += 1 << count;
            div -= divi << count;
        }
        return ans*sign;
    }
};