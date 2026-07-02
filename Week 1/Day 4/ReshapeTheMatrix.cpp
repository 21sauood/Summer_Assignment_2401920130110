class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& a, int r, int c) {
        int m, n;
        m = a.size();
        n = a[0].size();
        if (m * n != r * c)
            return a;
        vector<vector<int>> b(r, vector<int>(c));
        int row = 0, col = 0, i, j;
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                b[row][col] = a[i][j];
                col++;
                if (col == c) {
                    row++;
                    col = 0;
                }
            }
        }
        return b;
    }
};
