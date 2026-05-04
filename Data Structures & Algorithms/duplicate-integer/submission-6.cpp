#include <algorithm>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        //sort the array first so that if duplicate values exist, they are adjacent to each other
        //look through each value in list
        //compare second value to first stored value, if same, exit loop and return true
        //if not, continue searching for duplicate value
        //if not found, exit loop and return false
        
        sort(nums.begin(),nums.end());

        for (int i = 0; i < nums.size(); i++ ) {
             if (nums[i] == nums[i+1]) {
                return true;
             } }
                return false;
             
        }

};