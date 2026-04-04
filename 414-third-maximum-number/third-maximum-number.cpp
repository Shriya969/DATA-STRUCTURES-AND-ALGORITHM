class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // Step 1: Store distinct elements
        unordered_set<int> distinct;
        for (int i = 0; i < nums.size(); i++) {
            distinct.insert(nums[i]);
        }

        // Step 2: Push all distinct elements into max-heap
        priority_queue<int> pq;
        for(int i : distinct)
        {
            pq.push(i);
        }
        // Step 3: If less than 3 distinct numbers, return maximum
        if (pq.size() < 3) {
            return pq.top();
        }

        // Step 4: Pop first maximum
        pq.pop();
        // Step 5: Pop second maximum
        pq.pop();
        // Step 6: Third maximum is now on top
        return pq.top();
    }
};