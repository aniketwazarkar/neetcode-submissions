class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> result;
        for (const auto& row : matrix) {
            for (int val : row) {
                result.push_back(val);
            }
        }
        for(int i = 0; i<result.size();i++){
            if(result[i] == target){
                return true;
            }
        }
        return false;

    }
};
