class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        int n = meetings.size();
        int count = 0;
        int end = 0;
        sort(meetings.begin(), meetings.end());
        for (int i = 0; i < n; i++) {
            int s = meetings[i][0];
            int e = meetings[i][1];
            if (s > end + 1) {
                count += s - end - 1;
            }
            end = max(e, end);
        }
        count += days - end;
        return count;
    }
};
