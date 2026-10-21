class Solution {
public:
    int totalMoney(int n) {
        int sum = 0;
        int x;
        int y =0;
        if(n<=7) return (n*(n+1))/2;
        else {
            x = n/7; 
            for(int i=0;i<n%7;i++) {
                sum += x + 1 + i;
            }
            
        }
        for(int i=1;i<x;i++) {
            y += 7*i;
        }
        return 28*x + y + sum;
    }
};