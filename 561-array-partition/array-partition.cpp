class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        // Step 1: Sort the array in ascending order
        // Sorting ensures that in each pair of adjacent elements,
        // the first element is always the smaller one (the minimum of the pair)
        sort(nums.begin(), nums.end());

        // Step 2: Initialize sum to store the final result
        int sum = 0;

        // Step 3: Iterate through the array in steps of 2
        // Each iteration considers a pair of adjacent elements:
        // Pair: (nums[i], nums[i+1])
        // Since the array is sorted, nums[i] is the minimum of the pair
        for (int i = 0; i < nums.size(); i += 2) {
            sum += nums[i];  // Add the minimum of the current pair to sum
        }

        // Step 4: Return the total sum of minimums of all pairs
        return sum;
    }
};