class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(trainers.begin(), trainers.end());
        sort(players.begin(), players.end());
        int n = players.size();
        int m = trainers.size();
        int count = 0;
        int i = 0;
        for (int j = 0; j < m; j++) {
            if (players[i] <= trainers[j]) {
                count++;
                i++;
            }
            if (i >= n)
                break;
        }
        return count;
    }
};
