#include "lib.h"

class Solution 
{
    public:
        int removeDuplicates(vector<int>& nums) 
        {
            int size = nums.size();
            int slowPtr = 1;
            
            for (int fastPtr = 1; fastPtr < size; fastPtr++)
                if (nums[fastPtr] != nums[fastPtr - 1])
                    nums[slowPtr++] = nums[fastPtr];

            return slowPtr;
        }
};