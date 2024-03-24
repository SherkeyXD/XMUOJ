class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        vector<int> big, equal, small;
        int pivot = nums[rand() % nums.size()];
        for (int num : nums) {
            if (num > pivot)
                big.push_back(num);
            else if (num < pivot)
                small.push_back(num);
            else
                equal.push_back(num);
        }
        if (k <= big.size())
            return findKthLargest(big, k);
        if (nums.size() - small.size() < k)
            return findKthLargest(small, k - nums.size() + small.size());
        return pivot;
    }
};