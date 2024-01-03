class Solution {
int dp[1001];
#define mod 1000000007
public:
    int fnc(int i, int d, int f, int n){
        if(i+d >n) return 1;
        if(dp[i]!=-1) return dp[i];
        int ans =1;
        for(int x = i+d; x<=min(n,i+f); x++){
            if(x==i+f){
                ans -= 1;
                break;
            }
            ans = (ans%mod + fnc(x,d,f,n)%mod)%mod;
        }
        return dp[i] = ans;
    }
    int peopleAwareOfSecret(int n, int delay, int forget) {
        memset(dp,-1,sizeof(dp));
        return fnc(1,delay,forget,n);
    }
};