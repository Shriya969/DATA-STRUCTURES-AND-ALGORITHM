class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();

        // Result array to store sorted squares
        vector<int> result(n);

        // Two pointers:
        // i → start of array (smallest / most negative)
        // j → end of array (largest positive)
        int i = 0, j = n - 1;

        // Position to fill in result array (from end to start)
        int pos = n - 1;

        // Process until both pointers cross
        while (i <= j) {

            // Square values at both ends
            int leftSquare = nums[i] * nums[i];
            int rightSquare = nums[j] * nums[j];

            // Compare squares and place the larger one at current position
            if (leftSquare > rightSquare) {
                result[pos] = leftSquare; // place larger value
                i++;                     // move left pointer forward
            } else {
                result[pos] = rightSquare;
                j--;                     // move right pointer backward
            }

            pos--; // move to next position from end
        }

        // Return the sorted squares array
        return result;
    }
};