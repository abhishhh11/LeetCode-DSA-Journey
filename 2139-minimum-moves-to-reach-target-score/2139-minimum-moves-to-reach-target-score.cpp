class Solution {
public:
    int minMoves(int target, int md) {
        long long ans = 0;
        if(md == 0) return target-1;
        while(target != 1) {
            if(target%2 == 0 && md > 0) {
                target = target/2;
                ans++;
                md--;
            }
            else if(md == 0) return target + ans - 1;
            else {
                target -= 1;
                ans++;
            }
        }
        return ans;
    }
};