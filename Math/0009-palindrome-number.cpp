class Solution {
public:
    bool isPalindrome(int x) {
        long int ans = 0;
        int temp = x;
        if (x < 0) {
            return false;
        }
        while (x != 0) {
            int rem = x % 10;
            ans = ans * 10 + rem;
            x = x / 10;
        }
        if (ans == temp) {
            return true;
        }
        return false;
    }
};
