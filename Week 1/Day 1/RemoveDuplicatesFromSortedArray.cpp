class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int size = a.size(), i, j;
        i = 0;
        j = i + 1;
        while (j < size) {
            if (a[i] != a[j]) {
                a[i + 1] = a[j];
                i++;
                j++;
            } else {
                j++;
            }
        }
        return i + 1;
    }
};
