class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s_map;
        unordered_map<char, int> t_map;

        // Check the length of both strings first 
        if (s.length() != t.length()){
            return false;
        }

        // Put all values of s in a hashmap to map the character and num of times it appears in the code
        for (auto val: s){
            if (s_map.count(val) != 1) {
                s_map.insert({val, 1});
            }
            else {
                s_map[val] += 1;
            }
        }

        // Put all values of t in a hashmap 
        for (auto val: t){
            if (t_map.count(val) != 1) {
                t_map.insert({val, 1});
            }
            else {
                t_map[val] += 1;
            }
        }

        // Compare both values from both hashmaps
        for (auto [k, v]: s_map){
            if (s_map[k] != t_map[k]){
                return false;
            }
        }

        return true;

    }
};
