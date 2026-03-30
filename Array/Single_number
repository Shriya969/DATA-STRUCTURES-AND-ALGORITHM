class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result=0;
         //XOR ALL ELEMENTS TOGETHER
        for(int i=0;i<nums.size();i++)
        {
           result=result^nums[i];
        }

        return result;//duplicates will cancel out,only unique element will be left
    }
};
