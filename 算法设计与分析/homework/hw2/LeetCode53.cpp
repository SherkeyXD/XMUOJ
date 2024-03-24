class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        return maxSubArrayDivideAndConquer(nums, 0, nums.size() - 1);
    }

private:
    int maxSubArrayDivideAndConquer(vector<int>& nums, int left, int right) {
        if (left == right) {
            return nums[left];
        }
        int mid = left + (right - left) / 2;
        int leftMax = maxSubArrayDivideAndConquer(nums, left, mid);
        int rightMax = maxSubArrayDivideAndConquer(nums, mid + 1, right);
        int crossMax = maxCrossingSubArray(nums, left, mid, right);
        return max(max(leftMax, rightMax), crossMax);
    }

    int maxCrossingSubArray(vector<int>& nums, int left, int mid, int right) {
        int leftSum = INT_MIN;
        int sum = 0;
        for (int i = mid; i >= left; i--) {
            sum += nums[i];
            leftSum = max(leftSum, sum);
        }
        int rightSum = INT_MIN;
        sum = 0;
        for (int i = mid + 1; i <= right; i++) {
            sum += nums[i];
            rightSum = max(rightSum, sum);
        }
        return leftSum + rightSum;
    }
};