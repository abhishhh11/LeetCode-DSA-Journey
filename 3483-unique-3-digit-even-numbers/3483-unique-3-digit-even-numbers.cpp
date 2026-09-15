class Solution {
public:
    int totalNumbers(vector<int>& nums) {
        int n = nums.size();
        //vector<int> ans;
        int cnt = 0;
        unordered_map<int, int> m;
        for(auto ele : nums) m[ele]++;
        for(int i=100;i<999;i+=2) {
            int x =i;
            int a = x%10;
            x = x/10;
            int b = x%10;
            x /= 10;
            int c = x;
            if(m.find(a) != m.end()) {
                m[a]--;
                if(m[a] == 0) m.erase(a);
                if(m.find(b) != m.end()) {
                    m[b]--;
                    if(m[b] == 0) m.erase(b);
                    //m[b]++;
                    if(m.find(c) != m.end()) cnt++;
                    m[b]++;
                }
                m[a]++;
            }
        }
        return cnt;
    }
};