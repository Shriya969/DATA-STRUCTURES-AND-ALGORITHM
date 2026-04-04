class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> freq(501, 0); // frequency array

        // Count frequency of each number
        for(int i = 0; i < arr.size(); i++) {
            freq[arr[i]]++;
        }

        int max_count = -1;

        // Check for lucky numbers in the range 1..500
        for(int i = 1; i <= 500; i++) {
            if(freq[i] == i) {
                max_count = max(max_count, i);
            }
        }

        return max_count;
    }
};