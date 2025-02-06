class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size();
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                mp[nums[i] * nums[j]]++;
            }
        }
        long long ans = 0;
        for (auto itr = mp.begin(); itr != mp.end(); itr++) {
            if (itr->second > 1)
                ans += 8 * (itr->second * (itr->second - 1) / 2);
        }
        return ans;
    }
};
