class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0;
        while(start > 0 or goal > 0){
            int d1 = (start & 1);
            int d2 = (goal & 1);
            if((d1^d2) != 0){
                count++;
            }
            start = start >> 1;
            goal = goal >> 1;
        }
        return count;
    }
};