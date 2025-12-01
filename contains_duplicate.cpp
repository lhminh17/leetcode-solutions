class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> map;
        
        for(int i=0; i<nums.size(); i++){
            if( map.find(nums[i]) != map.end() ) return 1;
            else map[nums[i]] = nums[i];
        }
        return 0;
    }
};
