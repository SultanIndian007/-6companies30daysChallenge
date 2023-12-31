// Tc -> log(N), Sc -> O(1)

#define ll long long int
class Solution {
public:
    long long fnc(int a,int b){
        if(b==0) return a;
        return gcd(b, a%b);
    }
    int minimizeSet(int divisor1, int divisor2, int c1, int c2) {
        long long ans = INT_MAX, low=1, high = INT_MAX;

        while(low<=high){
            long long mid = (low + high) >> 1;

            long long temp1 = mid - mid/divisor1, temp2 = mid - mid/divisor2;

            long long gcd = fnc(divisor1, divisor2);
            long long lcm = (ll)((ll)divisor1) * ((ll) divisor2) / gcd;
            ll temp = mid - mid/lcm;

            if(temp1 >= c1 && temp2>=c2 && temp >= c1+c2){
                high = mid-1;
                ans = min(ans,mid);
            }
            else low = mid+1;
        }
        return ans;
    }
};