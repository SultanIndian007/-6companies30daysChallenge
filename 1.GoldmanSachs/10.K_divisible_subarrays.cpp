// tc -> O(n^2), sc -> O(n)
class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        int n = nums.size();
        set<vector<int>>st;

        for(int i=0; i<n; i++){
            vector<int>temp;
            int cnt = 0;
            for(int j=i; j<n; j++){
                temp.push_back(nums[j]);

                if(nums[j] % p == 0){
                    cnt++;
                }
                if(cnt > k){
                    break;
                }
                st.insert(temp);
            }
        }
        return st.size();
    }
};