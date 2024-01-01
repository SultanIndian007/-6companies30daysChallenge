// tc -> O(4^n), sc -> O(n)
class Solution {
public:
    vector<string>ans;
    vector<string>dial = {"0", "1", "abc", "def", "ghi","jkl", "mno","pqrs","tuv","wxyz"};
    void fnc(string comb, int ind, string digits){
        if(ind == digits.length()){
            ans.push_back(comb);
            return;
        }

        string letters = dial[digits[ind] - '0'];
        for(int i=0; i<letters.length(); i++){
            fnc(comb + letters[i], ind+1, digits);
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length() == 0){
            return ans;
        }
        fnc("", 0,digits);
        return ans;
    }
};