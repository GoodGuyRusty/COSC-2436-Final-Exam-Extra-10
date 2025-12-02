// LeetCode (Medium) | Maximum Subarray | https://leetcode.com/problems/maximum-subarray/description/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        if (n == 0) {
            return 0;
        }

        int maximum = nums[0];
        int current_max = nums[0];

        for (int i = 1; i < n; ++i) {

            current_max = max(nums[i], current_max + nums[i]);

            maximum = max(maximum, current_max);
        }

        return maximum;
    }
};
