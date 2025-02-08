class NumberContainers {
public:
    unordered_map<int, int> mp;
    unordered_map<int, priority_queue<int, vector<int>, greater<int>>> d;
    NumberContainers() {}

    void change(int index, int number) {
        if (mp.count(index) && mp[index] == number)
            return;
        mp[index] = number;
        d[number].push(index);
    }

    int find(int number) {
        int ans = -1;
        if (d.count(number)) {
            priority_queue<int, vector<int>, greater<int>> pq = d[number];
            while (!pq.empty() && mp[pq.top()] != number) {
                pq.pop();
            }
            if (!pq.empty())
                ans = pq.top();
        }
        return ans;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */
