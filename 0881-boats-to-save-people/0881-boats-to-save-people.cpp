class Solution {
public:
    int numRescueBoats(vector<int>& arr, int k) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int i=0;
        int j = n-1;
        int count =0;
        while(i<=j) {
            if(arr[i] + arr[j] <= k) {
                count++;
                i++;
                j--;
            }
            else if(i == j) {
                count++;
                break;
            }
            else {
                count++;
                j--;
            }
        }
        return count;
    }
};