// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
//         //given an array nums of n integers where
//         //elements are in the range [1,n]
//         //return an array of all the integers in the range [1,n] that do NOT appear in nums

//         //go through the list of numbers
//         //sort it in order
//         //output the missing numbers based on the index number

//         sort(nums.begin(),nums.end());
//         vector<int> missingNums;

//         for (int i=0; i < nums.size(); i++) {
//             if (nums[i] != i+1) {
//                 missingNums.push_back(i+1);
//             }
//         }

//         for (int i = nums.size(); i < 0; i--) {
//             if (missingNums[i] != nums[i]) {
//                 // missingNums.erase(missingNums.begin() + i);
//             }
//         }

//         return missingNums;
//     }
// };

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        vector<int> missingNums;

        int expected = 1;

        for (int i = 0; i < nums.size(); i++) {

            while (expected < nums[i]) {
                missingNums.push_back(expected);
                expected++;
            }

            if (expected == nums[i]) {
                expected++;
            }
        }

        while (expected <= nums.size()) {
            missingNums.push_back(expected);
            expected++;
        }

        return missingNums;
    }
};