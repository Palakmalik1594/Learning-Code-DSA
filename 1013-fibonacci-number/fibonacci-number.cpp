class Solution {
public:
 
 int help(vector<int>&dp,int n){
    
        if(n<=1){
            return n;
        }
        if(dp[n-1]!=-1){
            return dp[n];
        }
        return dp[n]=fib(n-1)+fib(n-2);

        
    }
    int fib(int n) {
        vector<int>dp(n+1,-1);
        return help(dp,n);
    }
};