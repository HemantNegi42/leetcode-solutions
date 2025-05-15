class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> output;
        int n = words.size();
        int x = groups[0];
        output.push_back(words[0]);
        for (int i = 1; i < n; i++) {
            if (groups[i] != x) {
                x = groups[i];
                output.push_back(words[i]);
            }
        }
        return output;
    }
};
