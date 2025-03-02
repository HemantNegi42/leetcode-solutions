class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1,
                                    vector<vector<int>>& nums2) {
        int i = 0, j = 0;
        int m = nums2.size();
        vector<vector<int>> ans;
        int n = nums1.size();

        while (i < n && j < m) {
            if (nums1[i][0] == nums2[j][0]) {
                vector<int> v = {nums1[i][0], nums1[i][1] + nums2[j][1]};
                ans.push_back(v);
                i++;
                j++;
            } else if (nums1[i][0] > nums2[j][0]) {
                vector<int> v = {nums2[j][0], nums2[j][1]};
                ans.push_back(v);
                j++;
            } else {
                vector<int> v = {nums1[i][0], nums1[i][1]};
                ans.push_back(v);
                i++;
            }
        }
        while (i < n) {
            vector<int> v = {nums1[i][0], nums1[i][1]};
            ans.push_back(v);
            i++;
        }
        while (j < m) {
            vector<int> v = {nums2[j][0], nums2[j][1]};
            ans.push_back(v);
            j++;
        }
        return ans;
    }
};
