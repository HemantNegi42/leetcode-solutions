class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        sort(pizzas.rbegin(), pizzas.rend());
        int n = pizzas.size();
        long long ans = 0;
        int group = n / 4;
        int odd = (group + 1) / 2;
        int even = group / 2;
        for (int i = 0; i < odd; i++) {
            ans += pizzas[i];
        }
        for (int i = 1; i < 2 * even; i += 2) {
            ans += pizzas[i + odd];
        }
        return ans;
    }
};
