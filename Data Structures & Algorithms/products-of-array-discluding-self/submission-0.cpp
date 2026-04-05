class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int total = 1, zeroCount = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                total *= nums[i];
            } else{
                zeroCount++;
            }
        }
        if(zeroCount >= 2){
            return vector<int> (nums.size(),0);
        }
        for(int i = 0; i < nums.size(); i++){
            if(zeroCount == 0){
                nums[i] = total / nums[i];
            } else {
                if(nums[i] != 0){
                    nums[i] = 0;
                } else{
                    nums[i] = total;
                }
            }
        }
        return nums;

    }
};