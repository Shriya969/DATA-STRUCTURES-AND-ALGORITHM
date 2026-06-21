class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int n=nums.size();
      int remain=0;
      unordered_map<int,int> mp;
      for(int i=0;i<n;i++) 
      {
        remain=target-nums[i];
        if(mp.count(remain))
        {
            return{i,mp[remain]};
        }
        mp[nums[i]]=i;
      }
      return {};
    }
};