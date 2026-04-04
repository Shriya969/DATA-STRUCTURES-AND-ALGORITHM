class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;

        for (long num : nums) {
            // Skip duplicates
            if (num == first || num == second || num == third) continue;

            if (num > first) {
                third = second;
                second = first;
                first = num;
            }
            else if (num > second) {
                third = second;
                second = num;
            }
            else if (num > third) {
                third = num;
            }
        }

        // If third was never updated, return first (maximum)
        if (third == LONG_MIN) {
            // Less than 3 distinct numbers → return maximum
            return first;
        }
        else {
            // Third maximum exists
            return third;
        }
    }
};