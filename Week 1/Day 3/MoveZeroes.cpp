class Solution {
public:
    void moveZeroes(vector<int>& a) {
        int i, j = -1, size = a.size();
        for (int i = 0; i < size; i++) {
            if (a[i] == 0) {
                j = i;
                break;
            }
        }
        if (j == -1)
            return;
        i = j + 1;
        while (i < size) {
            if (a[i] != 0) {
                swap(a[i], a[j]);
                j++;
            }
            i++;
        }
    }
};
