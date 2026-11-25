class Solution {
public:
    int setBits(int n) {
        int cnt = 0;
        while(n > 0) {
            cnt++;
            n = n & (n-1);
        }
        return cnt;
    } 
    bool isPrime(int x) {
        if(x == 1) return false;
        for(int i=2;i<=sqrt(x);i++) {
            if(x%i == 0) return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for(int i = left;i<=right;i++) {
            int x = setBits(i);
            if(isPrime(x)) ans++;
        }
        return ans;
    }
};