#include <bits/stdc++.h>
using namespace std;
vector<int> f(vector<int> &a, int target){
    map<int, int> d;
    int remaining;
    for (int i=0; i<a.size(); i++){
        remaining = target - a[i];
        if (d.find(remaining) != d.end())
            return {d[remaining], i};
        else
            d[a[i]] = i;
    }
    return {};
}
int main() {
    vector<int> a = {2,6,5,8,11}, result;
    int target = 14;
    result = f(a, target);
    for (auto it:result){
        cout<< it<<" ";
    }
    return 0;
}
