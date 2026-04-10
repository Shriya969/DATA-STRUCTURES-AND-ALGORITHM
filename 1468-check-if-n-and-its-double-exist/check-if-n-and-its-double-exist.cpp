class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            int target=2*arr[i];
            int left=0;
            int right=n-1;
            while(left <= right) {
                int mid = (left + right) / 2;

                if(arr[mid] == target && mid != i) {
                    return true;
                }
                else if(arr[mid] < target) {
                    left = mid + 1;
                }
                else {
                    right = mid - 1;
                }
            }
        }
      return false;
    }
};