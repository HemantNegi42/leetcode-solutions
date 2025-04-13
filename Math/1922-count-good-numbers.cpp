class Solution {
    long long mod_pow(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;

    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;

        base = (base * base) % mod;
        exp /= 2;
    }

    return result;
}
public:
    int countGoodNumbers(long long n) {
        long long x,y,z;
        long long m=1000000007;
        x=n/2;
        y=mod_pow(4, x, m);
        if(n%2==0)z=mod_pow(5, x, m);
        else z=mod_pow(5, x+1, m);
        return (y*z)%m;
    }
};
