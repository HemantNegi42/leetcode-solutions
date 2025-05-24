class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int n = words.size();
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            string s = words[i];
            int m = s.size();
            for (int j = 0; j < m; j++) {
                if (s[j] == x) {
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};
