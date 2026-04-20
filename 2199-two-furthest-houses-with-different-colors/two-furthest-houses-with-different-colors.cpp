class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int maxDistance = 0;

        for (int i = 0; i < n; i++) {
            if (colors[i] != colors[0]) {
                maxDistance = max(maxDistance, i);
            }
            if (colors[i] != colors[n - 1]) {
                maxDistance = max(maxDistance, n - 1 - i);
            }
        }

        return maxDistance;
    }
};