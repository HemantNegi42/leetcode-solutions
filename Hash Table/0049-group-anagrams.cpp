class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        vector<vector<string>> ans;
        int n = strs.size();
        for (int i = 0; i < n; i++) {
            string s = strs[i];
            sort(s.begin(), s.end());
            mp[s].push_back(strs[i]);
        }
        map<string, vector<string>>::iterator it = mp.begin();
        while (it != mp.end()) {
            ans.push_back(it->second);
            it++;
        }
        return ans;
    }
};
