class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        //given array of int = & nums
        //given int = target
        //return the indices i and j when the elements at 
        //those indices == target 

        //two pointers!!!

        //create two pointers one that parses from the beginning and one from the end
        //and sums those two elements, until the target is found
        //the beginning pointer remains stationary perhaps

        // int i = 0;
        // int j = nums.size() - 1;
        // int k;

        // for (k = nums.size(); k > 0; k--) {
        //     j = nums.size() - 1; // resetting j every time
        //     for (i = 0; i < nums.size(); i++) {
        //         if ( j<=i) {break;}
        //     if (nums[i] + nums[j] == target) {
        //         return {i,j};
        //     }
        //    j--;
        // }
        // }

        // return {};

        //bro like what am i doing
        //this is friceking o(n^3) like if i want to keep my original logic at least make it better

        for (int i = 0; i < nums.size(); i++) {
            //when index = 0
            //add index 0 and last index
            int j = nums.size() - 1;

            //keep only adding first index with last index
            //until we reach back to the first index
            //then move on and repeat with the second index and so forth

            while (j > i) {
                if (nums[i] + nums[j] == target) {
                    return {i,j};
                }
                j--;
            }

            //then it continues with i = 1 and i++
        }
    }
};

