#include "lib.h"

class Solution 
{
    public:
        bool containsDuplicate(vector<int>& nums) 
        {
            unordered_set<int> numSet;
            for (int num : nums)
            {
                if (numSet.count(num))
                    return true;
                return false;
            }
        }
};