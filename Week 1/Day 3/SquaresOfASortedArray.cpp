class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l, r, n, index;
        n = nums.size();
        l = 0;
        r = n - 1;
        index = n - 1;
        vector<int> res(n);
        while (l <= r) {
            if (abs(nums[l]) >= abs(nums[r])) {
                res[index] = nums[l] * nums[l];
                l++;
            } else {
                res[index] = nums[r] * nums[r];
                r--;
            }
            index--;
        }
        return res;
    }
};
