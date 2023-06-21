#include "lib.h"

string mergeAlternately(string word1, string word2) 
{
    string result = "";
    int i = 0, j = 0;
    int len1 = word1.length(), len2 = word2.length();

    while (i < len1 && j < len2)
    {
        result += word1[i++];
        result += word2[j++];
    }

    while (i < len1)
        result += word1[i++];
        
    while (j < len2)
        result += word2[j++];

    return result;
}

int main ()
{
    string w1 = "abcd";
    string w2 = "pq";

    cout << mergeAlternately(w1, w2);
}
