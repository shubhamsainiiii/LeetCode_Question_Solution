class Solution {
public:
    void sortColors(vector<int>& arr) {
      int count0=0,count1=0,count2=0;
      for(int i =0;i<arr.size();i++)
      {
        if(arr[i]==0) count0++;
        else if(arr[i]==1) count1++;
        else if(arr[i]==2) count2++;
      }  
      arr.clear();
      for(int i=0;i<count0;i++)
      {
        arr.push_back(0);
      }
      for(int i=0;i<count1;i++)
      {
        arr.push_back(1);
      }
      for(int i=0;i<count2;i++)
      {
        arr.push_back(2);
      }
      for(auto it :arr)
      {
        cout<<it<<" ";
      }
    }
};