#include "lib.h"

class Solution 
{
    public:
        vector<int> replaceElements(vector<int>& arr) 
        {
            int size = arr.size();
            int max = INT8_MIN;
            int tmp = -1;

            for (int i = size - 1; i >= 0; i--)
            {
                if (max < tmp)
                    max = tmp;
                tmp = arr[i];
                arr[i] = max;
            }

            return arr;
        }
};