class Solution {
public:
    vector<int> selfDividingNumbers(int l, int r) {
        vector<int> ans;
        for(int i=l;i<=r;i++) {
            int x = i;
            bool flag = true;
            while(x > 0) {
                int a = x % 10;
                if(a == 0 || i%a != 0) flag = false;
                // else if(x%a == i)
                x = x/10;
            } 
            if(flag == true) ans.push_back(i);
        } 
        return ans;

    }
};