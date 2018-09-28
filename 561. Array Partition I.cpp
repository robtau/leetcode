static const auto _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int x=nums.size(), wynik=0;
        sort(begin(nums), end(nums));
        for(int i=0;i<x;i+=2) wynik+=nums[i];
        return wynik;
    }
};
