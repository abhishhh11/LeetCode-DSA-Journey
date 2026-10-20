class Solution {
public:
    bool isThree(int n) {
        if(n<=2) return false;
        int cnt = 0;
        for(int i=2;i<n;i++) {
            if(cnt == 2) return false;
            else if(n%i == 0) cnt++;
        }
        if(cnt == 1) return true;
        else return false;
    }
};