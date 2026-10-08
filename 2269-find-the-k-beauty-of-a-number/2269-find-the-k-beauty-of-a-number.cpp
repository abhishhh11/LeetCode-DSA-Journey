class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int m = num;
        string s = to_string(num);
        int x = s.length();
        int cnt = 0;
        for(int i=0;i<x-k+1;i++) {
            int n = stoi(s.substr(i,k));
            if(n == 0) continue;
            else {
                if(m % n == 0) cnt++;
            }
        }
        return cnt;
    }
};