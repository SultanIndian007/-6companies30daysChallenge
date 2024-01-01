// tc -> O(n), sc -> O(n)
class Solution {
public:
    Solution(int m, int n): row(m), col(n), tot(m*n) {
        
    }
    
    vector<int> flip() {
        if(used.size() == tot) return{};
        int ind = rand() % tot;
        while(used.count(ind))
        ind = ++ind%tot;
        used.insert(ind);
        return {ind / col, ind % col};
    }
    
    void reset() {
        used.clear();
    }
    private:
        unordered_set<int>used;
        int row;
        int col;
        int tot;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(m, n);
 * vector<int> param_1 = obj->flip();
 * obj->reset();
 */