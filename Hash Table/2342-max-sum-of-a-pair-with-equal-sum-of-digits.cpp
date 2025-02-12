class Solution {
    int digitSum(int n) {
        int sum = 0;
        while (n) {
            sum += n % 10;
            n = n / 10;
        }
        return sum;
    }

public:
    int maximumSum(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < n; i++) {
            int sum = digitSum(nums[i]);
            if (mp.find(sum) == mp.end()) {
                mp[sum] = {nums[i], -1};
            } else {
                int& max1 = mp[sum][0];
                int& max2 = mp[sum][1];
                if (nums[i] > max1) {
                    max2 = max1;
                    max1 = nums[i];
                } else if (nums[i] > max2) {
                    max2 = nums[i];
                }
            }
        }
        int maxi = -1;
        for (auto itr = mp.begin(); itr != mp.end(); itr++) {
            if (itr->second[1] != -1) {
                maxi = max(maxi, itr->second[0] + itr->second[1]);
            }
        }
        return maxi;
    }
};
