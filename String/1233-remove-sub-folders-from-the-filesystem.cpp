class Solution {

public:
    vector<string> removeSubfolders(vector<string>& folder) {
        map<string, vector<string>> mp;
        int n = folder.size();
        sort(folder.begin(), folder.end(),
             [](const string& a, const string& b) {
                 return a.length() < b.length();
             });

        vector<string> ans;
        for (int i = 0; i < n; i++) {
            string st = folder[i];
            int count = 1;
            int m = st.length();
            string a = "/";
            bool flag = false;
            while (count < m) {
                while (count < m && st[count] != '/') {
                    a += st[count];
                    count++;
                }
                count++;
                if (mp.find(a) != mp.end()) {
                    mp[a].push_back(st);
                    flag = true;
                    break;
                }
                a += '/';
            }
            if (flag == false) {
                mp[st].push_back(st);
            }
        }
        for (auto itr = mp.begin(); itr != mp.end(); itr++) {
            vector<string> v = itr->second;
            int index = 0;
            int n = v.size();
            for (int i = 0; i < n; i++) {
                if (v[i].length() == 2) {
                    index = i;
                    break;
                }
                if (v[i].length() < v[index].length()) {
                    index = i;
                }
            }
            ans.push_back(v[index]);
        }
        return ans;
    }
};
