class Solution {
public:
    int longestConsecutive(std::vector<int>& nums) {
        if (nums.empty()) return 0;

        std::unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;

        for (int num : numSet) {
            if (numSet.find(num - 1) == numSet.end()) { 
                int currentNum = num;
                int streak = 1;

                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum++;
                    streak++;
                }

                longest = std::max(longest, streak);
            }
        }
        return longest;
    }
};
