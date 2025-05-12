class Solution {
    bool sol(int n, vector<int>& v) {
        int a = n % 10;
        n = n / 10;
        int b = n % 10;
        n = n / 10;
        int count = 0;
        if (v[a]--)
            count++;
        if (v[b]--)
            count++;
        if (v[n]--)
            count++;
        v[a]++;
        v[b]++;
        v[n]++;
        if (count == 3)
            return true;
        return false;
    }

public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> v(10);
        int n = digits.size();
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            v[digits[i]]++;
        }
        for (int i = 100; i < 999; i += 2) {
            if (sol(i, v))
                ans.push_back(i);
        }
        return ans;
    }
};
