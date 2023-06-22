#include "Array-Hashing/group_anagrams.cpp"

int main()
{
    // int n;
    // cout << "Enter the number of strings: ";
    // cin >> n;

    // vector<string> strs(n);
    // cout << "Enter the strings:" << endl;
    // for (int i = 0; i < n; ++i)
    //     cin >> strs[i];

    vector<string> strs = { "eat", "tea", "tan", "ate", "nat", "bat" };

    Solution solution;
    vector<vector<string>> groupedAnagrams = solution.groupAnagrams(strs);

    cout << "Grouped Anagrams:" << endl;
    for (const auto& group : groupedAnagrams)
    {
        cout << "[ ";
        for (const auto& str : group)
            cout << str << " ";
        cout << "]" << endl;
    }

    return 0;
}