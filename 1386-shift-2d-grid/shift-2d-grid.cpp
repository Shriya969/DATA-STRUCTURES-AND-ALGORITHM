class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int total = m * n;

        k %= total;
        if (k == 0) return grid;

        int count = 0;

        for (int start = 0; count < total; start++) {
            int curr = start;
            int prevVal = grid[curr / n][curr % n];

            do {
                int next = (curr + k) % total;
                int ni = next / n;
                int nj = next % n;

                swap(prevVal, grid[ni][nj]);

                curr = next;
                count++;
            } while (curr != start);
        }

        return grid;
    }
};