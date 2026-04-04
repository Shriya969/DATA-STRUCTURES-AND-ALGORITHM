#include <vector>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        // Iterate through the array
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                // Shift elements to the right
                int j = n - 1;
                while (j > i) {
                arr[j] = arr[j - 1];
                j--; // decrement j to move left
                }
                // Duplicate zero
                if (i + 1 < n) arr[i + 1] = 0;
                i++; // skip the newly inserted zero
            }
        }
    }
};