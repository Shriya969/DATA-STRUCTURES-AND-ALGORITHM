#include <vector>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int zeros = 0;

        // Step 1: Count zeros in the array
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) zeros++;
        }

        // Step 2: Set pointers
        int i = n - 1;          // original array index
        int j = n + zeros - 1;  // virtual index after duplicating zeros

        // Step 3: Fill array from the end
        while (i >= 0) {
            if (j < n) arr[j] = arr[i];  // copy element if inside array
            j--;

            // If it's a zero, duplicate it
            if (arr[i] == 0) {
                if (j < n) arr[j] = 0;
                j--;
            }

            i--; // move to previous element
        }
    }
};