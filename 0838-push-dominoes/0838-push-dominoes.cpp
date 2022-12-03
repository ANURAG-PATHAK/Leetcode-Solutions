class Solution {
public:
    string pushDominoes(string dominoes) {
        dominoes = 'L' + dominoes + 'R';
        string ans = "";
        for (int left = 0, right = 1; right < dominoes.size(); right++) {
            if (dominoes[right] == '.') continue;
            int mid = right - left - 1;
            if (left > 0)
                ans += dominoes[left];
            if (dominoes[left] == dominoes[right])
                ans += string(mid, dominoes[left]);
            else if (dominoes[left] == 'L' && dominoes[right] == 'R')
                ans += string(mid, '.');
            else
                ans += string(mid / 2, 'R') + string(mid % 2, '.') + string(mid / 2, 'L');
            left = right;
        }
        return ans;
    }
};