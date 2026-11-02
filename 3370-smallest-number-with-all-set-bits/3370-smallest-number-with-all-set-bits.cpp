class Solution {
public:
    int smallestNumber(int n) {
        if(n == 1) return 1;
        for(int i=1;i<n;i++) {
            if(pow(2,i) > n) return pow(2,i) - 1;
        }
        return -1;
    }
};