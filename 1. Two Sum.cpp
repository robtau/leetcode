// 16.03.24
// Runtime 3ms Beats 98.74% of users with C++ 
// Memory 15.58MB Beats 7.64% of users with C++
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, std::pair<bool, int>> numbers; // 1st is number, 2nd is index
        auto len = nums.size();
        for(auto i = 0; i < len; ++i){
            if(!numbers[target - nums[i]].first){
                numbers[nums[i]].first = true;
                numbers[nums[i]].second = i;
            }else{
                return {numbers[target - nums[i]].second, i};
            }
        }
    return {0, 0};
    }
};
