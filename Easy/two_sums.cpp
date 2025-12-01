class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> map;
        for ( int i = 0; i < nums.size(); i++) { 
            int x = target - nums[i];
            if ( map.find(x) != map.end() ) {
                return {map[x], i};
            }
            else{
                map[nums[i]] = i;
            }   
        }
        return {};
    }
};

