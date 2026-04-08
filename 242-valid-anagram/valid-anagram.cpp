class Solution {
public:
    bool isAnagram(string s, string t) {
        // If lengths differ, strings cannot be anagrams
        if (s.length() != t.length()) {
            return false;
        }

        int freq[26] = {0};  // Frequency array for lowercase letters

        // Count characters in the first string
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            freq[c - 'a']++;// 'a' maps to index 0, 'b' to 1, ..., 'z' to 25
        }

        // Subtract character counts using the second string
        for (int i = 0; i < t.length(); i++) {
            char c = t[i];
            freq[c - 'a']--;
        }

        // Check if all frequencies are zero
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                return false;  // Mismatch found
            }
        }

        return true;  // Strings are anagrams
    }
};