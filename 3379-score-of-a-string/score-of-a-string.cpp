class Solution {
public:
    int scoreOfString(string s) {
        int size = s.length();
        int num = 0;
        for (int i = 0; i < size - 1; i++) {
            num = num + abs(s.at(i) - s.at(i + 1));
        }
        return num;
    }
};