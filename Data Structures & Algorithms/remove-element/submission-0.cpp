class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        //given array nums and an int val
        //remove all occurences of val from array nums
        //return the number of remaining elements as k =

        for (int i = 0; i < nums.size(); i++) { //O(n)
            if (nums[i] == val) {
                nums.erase(nums.begin() + i); //O(n)
                //all elements shift left
                i--;
                //go back to recheck shifted element
            }
        }

        return nums.size();
        
    }

    //this is my original solution but the time complexity is really bad
    //erase() is O(n) and doing it inside the for loop makes it O(n^2)
    //for optimal solution, use two pointers

//     class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         int k = 0; // position for next valid element

//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] != val) {
//                 nums[k] = nums[i];
//                 k++;
//             }
//         }

//         return k;
//     }
// };
};