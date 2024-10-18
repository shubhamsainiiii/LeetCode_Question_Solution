class Solution {
public:
    int romanToInt(string s) {
        int total = 0;

        for (int i = 0; i < s.length(); i++) {
            switch (s[i]) {
            case 'I':
                total += 1;
                break;
            case 'V':
                total += 5;
                break;
            case 'X':
                total += 10;
                break;
            case 'L':
                total += 50;
                break;
            case 'C':
                total += 100;
                break;
            case 'D':
                total += 500;
                break;
            case 'M':
                total += 1000;
                break;
            }
            if (i > 0) {
                if ((s[i] == 'V' || s[i] == 'X') && s[i - 1] == 'I') {
                    total -= 2; 
                } else if ((s[i] == 'L' || s[i] == 'C') && s[i - 1] == 'X') {
                    total -= 20;
                } else if ((s[i] == 'D' || s[i] == 'M') && s[i - 1] == 'C') {
                    total -= 200; 
                }
            }
        }
        return total;
    }
};