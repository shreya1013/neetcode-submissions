class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        std::unordered_set<int> new_nums;

        for (int i = 0; i < nums.size(); i++){
            auto result = new_nums.insert(nums[i]);
            if (result.second == false) {
                return true; 
            }
        }
        return false; 
    }
};