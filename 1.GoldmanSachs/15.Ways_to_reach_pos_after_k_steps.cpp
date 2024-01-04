// Time complexity: O(3000*k), Space complexity:O(3000*k)


class Solution {
    int mod = 1e9+7;
    long long fnc(int curr, int end, int k, vector<vector<int>>&dp){
        if(k==0){
            return curr == end;
        }
        if(dp[999 + curr][k] != -1){
            return dp[999+curr][k];
        }

        long long t1 = fnc(curr+1, end, k-1,dp);
        long long t2 = fnc(curr-1, end, k-1,dp);

        return dp[999+curr][k] = (t1+t2) %mod;
    }
public:
    int numberOfWays(int startPos, int endPos, int k) {
        vector<vector<int>> dp(3000,vector<int>(k+1, -1));
        return fnc(startPos, endPos, k,dp)%mod;
    }
};