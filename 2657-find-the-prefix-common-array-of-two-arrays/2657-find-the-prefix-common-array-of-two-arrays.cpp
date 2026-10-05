class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans; 
        for(int i=0;i<A.size();i++) {
            int cnt = 0;
            for(int k=0;k<=i;k++) {
                for(int j=0;j<=i;j++) {
                    if(A[k] == B[j]) cnt++;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};