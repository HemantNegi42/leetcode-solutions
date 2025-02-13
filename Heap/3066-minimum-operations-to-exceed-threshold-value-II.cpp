class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> pq(
            nums.begin(), nums.end());
        int count = 0;
        while (pq.size() != 1) {
            if (pq.top() >= k)
                break;
            long long a = 2 * pq.top();
            pq.pop();
            long long b = pq.top();
            pq.pop();
            pq.push(a + b);
            count++;
        }
        return count;
    }
};
