#include "lib.h"

class Solution 
{
    public:
        void moveZeroes(vector<int>& nums) 
        {
            int size = nums.size();

            for (int fas = 0, slow = 0; fas < size; fas++)
            {
                if (nums[fas] && !nums[slow])
                {
                    nums[fas]  = nums[fas] ^ nums[slow];
                    nums[slow] = nums[fas] ^ nums[slow];
                    nums[fas]  = nums[fas] ^ nums[slow];
                }
                if (nums[slow]) slow++;
            }
        }
};