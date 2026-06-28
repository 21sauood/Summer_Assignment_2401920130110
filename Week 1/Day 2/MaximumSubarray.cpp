class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int currSum, maxSum, i, n = a.size();
        currSum = a[0];
        maxSum = a[0];
        for (i = 1; i < n; i++) {
            if (currSum + a[i] > a[i]) {
                currSum += a[i];
            } else {
                currSum = a[i];
            }
            if (currSum > maxSum) {
                maxSum = currSum;
            }
        }
        return maxSum;
    }
};
