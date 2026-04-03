class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;  // Current candidate for majority element
        int count = 0;      // Count for candidate
        int n = nums.size();

        // Step 1: Traverse the array using a standard for loop
        for (int i = 0; i < n; i++) {
            int num = nums[i];  // Current element

            // Step 2: If count is 0, pick current element as candidate
            if (count == 0) {
                candidate = num;
            }

            // Step 3: Update count
            if (num == candidate) {
                count++;  // Same as candidate → increase
            } else {
                count--;  // Different → decrease
            }
        }

        // Step 4: Return the candidate
        return candidate;
    }
};
//answer