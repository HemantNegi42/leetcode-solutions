class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int n = dominoes.size();
        map<vector<int>, int> mp;
        for (int i = 0; i < n; i++) {
            vector<int> v = dominoes[i];
            if (v[0] > v[1]) {
                swap(v[0], v[1]);
            }
            mp[v]++;
        }
        long long count = 0;
        for (auto itr = mp.begin(); itr != mp.end(); itr++) {
            cout << itr->second << " ";
            long long x = itr->second;
            if (x > 1) {
                count += x * (x - 1) / 2;
            }
        }
        return count;
    }
};
