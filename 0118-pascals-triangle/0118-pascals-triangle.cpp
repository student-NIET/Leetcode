class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;

        for(int r = 1; r <= numRows; r++) {

            vector<int> row;
            long long res = 1;

            row.push_back(1);

            for(int i = 1; i < r; i++) {
                res = res * (r - i);
                res = res / i;

                row.push_back(res);
            }

            ans.push_back(row);
        }

        return ans;
    }
};