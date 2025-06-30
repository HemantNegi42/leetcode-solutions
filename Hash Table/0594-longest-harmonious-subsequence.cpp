class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int, int> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }
        if (mp.size() == 1)
            return 0;
        int maxi = 0;
        auto itr = mp.begin();
        while (itr != mp.end()) {
            int a = itr->first;
            int b = itr->second;
            cout << a << ":" << b << " ";
            itr++;
            if (itr == mp.end())
                break;
            if (itr->first - a == 1) {
                maxi = max(maxi, b + itr->second);
            }
        }
        return maxi;
    }
};
