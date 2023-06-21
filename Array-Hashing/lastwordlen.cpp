#include "lib.h"

class Solution 
{
    public:
        int lengthOfLastWord(string s) 
        {
            int count = 0;
            int i = s.length() - 1;
            while (i >= 0)
            {
                if (isalpha(s[i]))
                    count++;
                else if (count) break;
                i--;
            }
            return count;
        }
};