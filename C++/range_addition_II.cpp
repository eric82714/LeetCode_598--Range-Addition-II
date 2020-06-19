class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.empty()) return m * n;
        else {
            int x = ops[0][0], y = ops[0][1];
            for(int i = 1; i < ops.size(); i++) {
                if(ops[i][0] < x) x = ops[i][0];
                if(ops[i][1] < y) y = ops[i][1];
            }
            return x * y;
        }
    }
};
