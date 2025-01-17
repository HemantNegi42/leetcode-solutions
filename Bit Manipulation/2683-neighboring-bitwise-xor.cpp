class Solution {

public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n = derived.size();
        int XOR = 0;
        for (int i = 0; i < n; i++) {
            XOR ^= derived[i];
        }
        if (XOR == 0)
            return true;
        return false;
    }
};
