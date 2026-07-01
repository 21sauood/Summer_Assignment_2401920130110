class Solution {
public:
    bool containsDuplicate(vector<int>& a) {
        unordered_set<int> s;
        for (int i = 0; i < a.size(); i++) {
            if (s.count(a[i]) > 0)
                return true;
            s.insert(a[i]);
        }
        return false;
    }
};
