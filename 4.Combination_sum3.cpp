// tc -> O(9^k), sc -> O(n)
class Solution {
public:
    void fnc(vector<vector<int>>&ans, vector<int>&op, int i, int k, int n){
        if(op.size() == k && n == 0){
            ans.push_back(op);
            return;
        }

        if(op.size() == k && n!=0){
            return;
        }

        for(int x=i; x<=9; x++){
            op.push_back(x);
            fnc(ans, op, x+1, k, n-x);
            op.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        if(k>n) return ans;
        vector<int>op;
        int i=1;
        fnc(ans, op, i,k,n);
        return ans;
    }
};