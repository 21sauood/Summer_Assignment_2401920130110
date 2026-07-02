class Solution {
public:
    int maxArea(vector<int>& a) {
        int i, j, b, h, ans, area;
        i = 0;
        j = a.size() - 1;
        ans = 0;
        while (i < j) {
            b = j - i;
            if (a[i] > a[j])
                h = a[j];
            else
                h = a[i];
            area = b * h;
            if (area > ans)
                ans = area;
            if (a[i] < a[j])
                i++;
            else
                j--;
        }
        return ans;
    }
};
