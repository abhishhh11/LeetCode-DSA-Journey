class Solution {
public:
    bool digitCount(string num) {
        vector<int> freq(10);
        for(int i=0;i<num.length();i++) {
            int a = num[i] - '0';
            freq[a] = freq[a] + 1;
        }
        for(int i=0;i<num.length();i++) {
            if(freq[i] != num[i] - '0') return false;
        }
        return true;
    }
};