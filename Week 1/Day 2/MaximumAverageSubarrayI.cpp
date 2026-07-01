class Solution {
public:
    double findMaxAverage(vector<int>& a, int k) {
        double windowSum = 0, maxSum;
        int n = a.size(), i;
        for (i = 0; i < k; i++) {
            windowSum += a[i];
        }
        maxSum = windowSum;
        for (i = k; i < n; i++) {
            windowSum += a[i];
            windowSum -= a[i - k];
            if (windowSum > maxSum)
                maxSum = windowSum;
        }
        return maxSum / k;
    }
};
