class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;
        vector<string> arr(numRows, "");
        int key = 1;
        int row = 0;
        for (auto c : s) {
            arr[row].push_back(c);
            row += key;
            if (row == numRows - 1)
                key = -1;
            if (row == 0)
                key = 1;
        }
        string res;
        for (auto x : arr)
            res.append(x);
        return res;
    }
};