// tc -> O(n), sc ->O(1)
class Solution{   
public:
    string printMinNumberForPattern(string s){
        // code here 
        int n = s.size();
        int num=1;
        string ans = "";
        stack<int>st;
        for(int i=0; i<=n; i++){
            st.push(num);
            if(i==n or s[i] =='I'){
                while(!st.empty()){
                    ans += st.top()+'0';
                    st.pop();
                }
            }
            num++;
        }
        return ans;
    }
};