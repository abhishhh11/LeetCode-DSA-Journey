class Solution {
public:
    int maxScore(string s) {
        int n = s.size(); 
        int mx = INT_MIN;
        int nz=0;
        int no=0;
        for(int i=0;i<n;i++) {
            nz=0;
            no=0;
            for(int j=0;j<=i;j++) {
                if(j == n-1) break;
                if(s[j] == '0') nz++;
            }
            for(int j=i+1;j<n;j++) {
                if(s[j] == '1') no++;
            }
            int x = nz+no;
            mx = max(mx,x);
        }
        return mx;
    }
};