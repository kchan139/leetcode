#include "Array-Hashing/group_anagrams.cpp"

int main()
{
    // cout << "Enter the number of strings: ";
    // int n; cin >> n;

    // cout << "Enter the strings:" << endl;
    // vector<string> strs(n);
    // for (int i = 0; i < n; ++i)
    //     cin >> strs[i];

    vector<string> strs = { "eat", "tea", "tan", "ate", "nat", "bat" };

    Solution solution;
    vector<vector<string>> groupedAnagrams = solution.groupAnagrams(strs);

    cout << "Grouped Anagrams:" << endl;
    for (const auto & group : groupedAnagrams)
    {
        cout << "[";
        for (size_t i = 0, size = group.size(); i < size; ++i)
        {
            cout << group[i];
            if (i < size - 1)
                cout << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}