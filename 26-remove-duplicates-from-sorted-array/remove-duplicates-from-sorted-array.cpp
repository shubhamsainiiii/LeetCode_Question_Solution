class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int uniqueNumber=1;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i-1]!=arr[i])
            {
                arr[uniqueNumber]=arr[i];
                uniqueNumber++;
            }
        }
        return uniqueNumber;
    }
};