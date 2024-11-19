class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>map1;
        map<char,int>map2;
        if(s.length()!=t.length())
        {
            return false;
        }
        for(int i=0;i<s.length();i++)
        {
            map1[s[i]]++;
            map2[t[i]]++;
        }
        for(int i=0;i<s.length();i++)
        {
            if(map1[s[i]]!=map2[s[i]]) return false;
        }
        return true;
    }
};