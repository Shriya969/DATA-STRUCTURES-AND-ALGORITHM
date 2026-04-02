class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;        // To store all unique triplets

        // Step 1: Sort the array
        sort(nums.begin(), nums.end());

        // Step 2: Iterate through the array, fixing one element at a time
        for (int i = 0; i < n; i++) {

            // Skip duplicate elements for the fixed index i
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int k = i + 1;        // Left pointer just after the fixed element
            int j = n - 1;        // Right pointer at the end

            // Step 3: Use two pointers to find pairs that sum to -nums[i]
            while (k < j) {
                int sum = nums[k] + nums[j];

                if (sum == -nums[i]) {
                    // Found a valid triplet
                    res.push_back({nums[i], nums[k], nums[j]});

                    // Move both pointers to the next different numbers
                    k++;
                    j--;

                    // Skip duplicates for k
                    while (k < j && nums[k] == nums[k - 1]) k++;

                    // Skip duplicates for j
                    while (k < j && nums[j] == nums[j + 1]) j--;
                }
                else if (sum < -nums[i]) {
                    // Sum too small → move left pointer forward
                    k++;
                }
                else {
                    // Sum too large → move right pointer backward
                    j--;
                }
            }
        }

        // Step 4: Return all unique triplets
        return res;
    }
};
