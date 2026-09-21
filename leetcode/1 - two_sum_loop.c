class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for(int i = 0; i < size(nums); i++){
            for(int j = i + 1; j < size(nums); j++){
                if((nums[j] + nums[i]) == target ){
                    return{i, j};
                }
            }
        }
        return {};
    }
};
