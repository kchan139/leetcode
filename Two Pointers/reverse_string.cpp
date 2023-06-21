#include "lib.h"

class Solution 
{
    public:
        void reverseString(vector<char>& s) 
        {
            int size = s.size();
            for (int i = 0; i < size / 2; i++)
            {
                s[i]            = s[i] ^ s[size - i - 1];
                s[size - i - 1] = s[i] ^ s[size - i - 1];
                s[i]            = s[i] ^ s[size - i - 1];
            }
        }
};