class Solution {
public:
    int diagonalSum(vector<vector<int>>& a) {
        int sum = 0, i, j, n = a.size();
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (i == j || i + j == n - 1)
                    sum += a[i][j];
            }
        }
        return sum;
    }
};
