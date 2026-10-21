class Solution {
public:
    int pivotInteger(int n) {
        if(n == 1) return 1;
        if(n == 2) return -1;
        long long lo = 1;
        long long hi = n;
        long long x, y;
        while(lo <= hi) {
            long long mid = lo + (hi - lo)/2;
            x = 1LL*(mid*(mid-1))/2;
            //y = 1LL*((n*(n-1))/2) - x; 
            y = 1LL * ((n * (n + 1)) / 2) - x;
            if(x + mid == y) return mid;
            else if(x + mid < y) lo = mid + 1;
            else hi = mid - 1;
        }
        return -1;
    }
};