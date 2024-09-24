class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int num = numRows;
        vector<vector<int>> arr;
        for(int i =1;i<=num;i++){
            vector<int> newarr(i,1);
            arr.push_back(newarr);
        }
        for(int i = 0;i<num;i++){
            for(int j=1;j<i;j++){
                arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
            }
        }
        return arr;
    }
};