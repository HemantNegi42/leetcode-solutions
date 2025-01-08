class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            string a = words[i];
            for (int j = i + 1; j < n; j++) {
                string b = words[j];
                if (a.size() > b.size())
                    continue;
                string prefix = b.substr(0, a.size());
                string suffix = b.substr(b.size() - a.size(), a.size());
                if (a == prefix && a == suffix)
                    count++;
            }
        }
        return count;
    }
};
