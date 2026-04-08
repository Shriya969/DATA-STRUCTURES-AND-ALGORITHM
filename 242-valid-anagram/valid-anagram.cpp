class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.length();
//Two words (or strings) are anagrams of each other if:
//They contain exactly the same characters
//The frequency of each character is the same
//The order does not matter 
if(s.length()!=t.length())
{
    return false;
}
sort(s.begin(),s.end());
sort(t.begin(),t.end());
if(s==t)
{
    return true;
}
else
{
    return false;
}
    }
};