class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        if(n == 10) return true;
        int i = 10;
        int cnt = 0;
        while(i <= n && n > 0) {
            n = n-i;
            cnt++;
            i--;
        }
        if(cnt%2 == 0) return false;
        else return true;
    }
};