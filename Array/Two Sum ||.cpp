class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int n = numbers.size();   // size of array
        
        int i = 0;        // left pointer (start)
        int j = n - 1;    // right pointer (end)

        // loop until pointers meet
        while (i < j) {
            
            int sum = numbers[i] + numbers[j];  // current sum
            
            // case 1: if sum matches target → answer found
            if (sum == target) {
                // return 1-based indices as required
                return {i + 1, j + 1};
            }
            
            // case 2: sum is smaller → move left pointer forward
            else if (sum < target) {
                i++;   // increase sum
            }
            
            // case 3: sum is greater → move right pointer backward
            else {
                j--;   // decrease sum
            }
        }

        // if no solution found (edge case)
        return {};
    }
};
