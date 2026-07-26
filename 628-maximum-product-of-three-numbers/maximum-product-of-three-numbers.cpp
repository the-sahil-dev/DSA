class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return max(nums.back()*nums[n-2]*nums[n-3],
                    nums.front()*nums.back()*nums[1]);
    }
};