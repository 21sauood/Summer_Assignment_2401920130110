class Solution {
public:
    int maxProfit(vector<int>& a) {
        int i, min, profit, size = a.size();
        min = a[0];
        profit = 0;
        for (i = 0; i < size; i++) {
            if (min > a[i]) {
                min = a[i];
            }
            if (profit < a[i] - min) {
                profit = a[i] - min;
            }
        }
        return profit;
    }
};
