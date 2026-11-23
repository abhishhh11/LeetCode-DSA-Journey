class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<int> ans;
        vector<double> temp;
        for(int i=0;i<arr.size();i++) {
            for(int j=i+1;j<arr.size();j++) {
                temp.push_back(static_cast<double>(arr[i])/arr[j]);
            }
        }
        sort(temp.begin(), temp.end());
        for(int i=0;i<arr.size();i++) {
            for(int j=i+1;j<arr.size();j++) {
                if(static_cast<double>(arr[i])/arr[j] == temp[k-1]) {
                    ans.push_back(arr[i]);
                    ans.push_back(arr[j]);
                    return ans;
                }
            }
        }
        return ans;
    }
};