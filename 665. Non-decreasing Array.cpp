static const auto _ = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();
class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        bool b=false;
        for(int i=1;i<nums.size(); i++){
            if(nums[i-1]>nums[i]){
                if(b) return false;
                b=true;
                if(nums[i-2]<=nums[i]){
                    nums[i-1]=nums[i];
                }else if(nums[i-1]<=nums[i+1]){
                    nums[i]=nums[i+1];
                }else if(i+1==nums.size()){
                    return true;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};
