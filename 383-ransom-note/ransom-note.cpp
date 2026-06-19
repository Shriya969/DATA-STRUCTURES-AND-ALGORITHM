class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=ransomNote.size();
        int m=magazine.size();
        unordered_map<char,int>mp1;
        unordered_map<char,int> mp2;
        if(m<n)
        {
            return false;
        }
        for(char ch:ransomNote)
        {
            mp1[ch]++;
        }
        for(char ch2:magazine)
        {
            mp2[ch2]++;
        }
        for(auto it:mp1)
        {
            if(mp2[it.first]<it.second)
            {
                return false;
            }
        }
        return true;
    }
};