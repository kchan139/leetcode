#include "lib.h"

class Solution 
{
    public:
        bool isSubsequence(string s, string t) 
        {
            int len = s.length();
            int i = 0;

            for (char c : t)
                if (c == s[i])
                    i++;

            return i == len;
        }
};