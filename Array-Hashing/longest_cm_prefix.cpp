#include "lib.h"

class Solution 
{
    public:
        string longestCommonPrefix(vector<string>& strs) 
        {
            if (strs.empty()) return "";

            string prefix = "";
            int vectorSize = strs.size();

            int minlen = strs[0].length();
            for (int i = 1; i < vectorSize; i++)
                if (minlen > strs[i].length())
                    minlen = strs[i].length();

            for (int i = 0; i < minlen; i++)
            {
                char current = strs[0][i];
                for (int j = 0; j < vectorSize; j++)
                    if (strs[j][i] != current)
                        return prefix;
                prefix += current;
            }

            return prefix;
        }
};