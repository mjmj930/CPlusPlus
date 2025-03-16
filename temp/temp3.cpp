#include<iostream>

class Solution {
    public:
        vector<vector<int>> threeSum(vector<int>& nums) {
            
        }
    };









int main() {
    Solution sol;
    std::vector<int> nums = {-1, 0, 1, 2, -1, -4};
    std::vector<std::vector<int>> result = sol.threeSum(nums);
    for (const auto& triplet : result) {
        for (int num : triplet) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}