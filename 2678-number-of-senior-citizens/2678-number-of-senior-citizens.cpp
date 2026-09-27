class Solution {
public:
    int countSeniors(vector<string>& d) {
        int cnt=0;
        for(int i=0;i<d.size();i++) {
            int num = stoi(d[i].substr(11, 2));
            if(num > 60) cnt++;
        }
        return cnt;
    }
};