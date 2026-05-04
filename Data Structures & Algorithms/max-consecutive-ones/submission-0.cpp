class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        //given a binary array (array with two distinct values)
        //RETURN the max num of consecutive 1's in the array

        //parse through the array
        //keep count of how many 1s appear adjacently for the entire array

        // sort(nums.end(), nums.begin());

        // int count;
        // int i;
        // while (nums[i] == 1) {
        //         count++; 
        // }
        // return count;

        //OMG IM AN IDIOT i just wanted to reinforce what I learned
        //so i decided to use the sorting function, but its unneccessary and 
        //not even applicable here. bc i want to count the consecutive 1s
        //in the original array. if i sort it, i'm creating a whole new array 
        //BRUHHH

        int i = 0;
        int count = 0;

        //track the maximum
        int maxCount = 0;
        while (i < nums.size()) {
            if (nums[i] == 1) {
                count++;
                maxCount = max(maxCount, count);
            } else if (nums[i] == 0) {
                count = 0;
            }
            i++;
        }
        return maxCount;

}
};