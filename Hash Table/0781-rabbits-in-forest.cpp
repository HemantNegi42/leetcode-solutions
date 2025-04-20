class Solution {
public:
    int numRabbits(vector<int>& answers) {
        int n = answers.size();
        int rabbits = 0;
        vector<int> v(1000);
        for (int i = 0; i < n; i++) {
            v[answers[i]]++;
            if (v[answers[i]] == answers[i] + 1) {
                rabbits += answers[i] + 1;
                v[answers[i]] = 0;
            }
        }
        for (int i = 0; i < n; i++) {
            if (v[answers[i]] != 0) {
                rabbits += answers[i] + 1;
                v[answers[i]] = 0;
            }
        }
        return rabbits;
    }
};
