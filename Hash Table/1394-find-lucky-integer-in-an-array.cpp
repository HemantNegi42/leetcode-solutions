class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> mp;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }
        int ans = -1;
        for (auto itr = mp.begin(); itr != mp.end(); itr++) {
            if (itr->first == itr->second)
                ans = itr->first;
        }
        return ans;
    }
};
