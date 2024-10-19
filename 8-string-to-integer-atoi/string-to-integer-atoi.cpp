class Solution {
public:
    int myAtoi(string s) {
        int i = 0, str = 1;
        long result = 0;
        while (i < s.length() && s[i] == ' ') {
            i++;
        }
        if (i < s.length() && (s[i] == '+' || s[i] == '-')) {
            str = (s[i] == '-') ? -1 : 1;
            i++;
        }
        while (i < s.length() && isdigit(s[i])) {
            result = result * 10 + (s[i] - '0');
            if (result * str > INT_MAX)
                return INT_MAX;
            if (result * str < INT_MIN)
                return INT_MIN;

            i++;
        }

        return result * str;
    }
};
