#include "lib.h"

class Solution 
{
    public:
        bool isPalindrome(string s) 
        {
            string converted = "";
            for (int i = 0, len = s.length(); i < len; i++)
            {
                s[i] = tolower(s[i]);
                if (isalpha(s[i]) || isdigit(s[i])) converted += s[i];
            }

            for (int i = 0, len = converted.length(); i < len / 2; i++)
                if (converted[i] != converted[len - i - 1]) 
                    return false;

            return true;
        }
};