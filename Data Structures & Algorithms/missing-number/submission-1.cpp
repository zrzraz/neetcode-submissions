class Solution {
public:
    int missingNumber(vector<int>& nums) {

        //given an array of nums
        //containing integers in the range 0-n; n being the last index + 1
        //return the single number in the range that is missing
        sort(nums.begin(),nums.end());
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]!= i) {
                return i;
            }
        }

        
    }
};
