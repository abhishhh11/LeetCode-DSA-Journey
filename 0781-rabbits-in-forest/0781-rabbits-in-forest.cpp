class Solution {
public:
    int numRabbits(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int, int> mp;
        int result=0;
        for(int i=0;i<n;i++) {
            if(!mp[arr[i] +1]) {
                result += arr[i]+1;
                if(arr[i] == 0) continue;
                mp[arr[i] + 1 ] = 1;
            }
            else {
                mp[arr[i] + 1]++;
                int key = mp[arr[i] + 1];
                int val = mp[key];
                if(key == val) mp.erase(key);
            }
        }
        return result;
    }
};