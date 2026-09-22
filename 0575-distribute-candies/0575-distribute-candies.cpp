class Solution {
public:
    int distributeCandies(vector<int>& arr) {
        unordered_set<int> s;
        for(int i=0;i<arr.size();i++) {
            s.insert(arr[i]);
        }
        int ans = s.size();
        if(ans <= arr.size()/2)  return ans;
        else return arr.size()/2;
    }
};