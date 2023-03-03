//Runtime 11 ms Beats 85.87%
//Memory 11.7 MB Beats 11.22%
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
std::map<int,int> bucket;
int n=nums.size();
for(int i=0;i<n;i++){
    if(bucket[target-nums[i]]){
        return {bucket[target-nums[i]]-1, i};
    }
        bucket[nums[i]]=i+1;
}
        return {0,0}; 
    }
};
