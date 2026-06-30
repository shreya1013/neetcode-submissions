class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create a new hashmap mapping nums + index 
        unordered_map<int, int> ordered;
        int diff = 0;
        vector<int> val;

        // Iterate through all values of nums and add them to hashmap one by one while checking 
        // if the difference between the value and the target is in the hashmap already
        for (int i = 0; i < nums.size(); i++) {
            diff = target - nums[i];
            if (ordered.contains(diff)) {
                if (i < ordered[diff]) {
                    val.push_back(i);
                    val.push_back(ordered[diff]);
                }
                else {
                    val.push_back(ordered[diff]);
                    val.push_back(i);
                }
                return val;
            }
            ordered.insert({nums[i], i});
        }
        return val;
    }
};
