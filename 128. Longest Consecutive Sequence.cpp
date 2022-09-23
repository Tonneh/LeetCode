#include <bits/stdc++.h>


using namespace std;

int longestConsecutive(vector<int> &nums)
{
    int res = 0;
    unordered_set<int> s;
    // insert all numbers into the set
    for (auto i: nums)
        s.insert(i);

    // loop through the array
    for (auto i : nums)
    {
        // check if the number is a starting sequence
        // if it is then it shouldn't have a number b4 it
        if (!s.count(i - 1))
        {
            int length = 1;
            // increment length until sequence breaks
            while (s.count(i + length))
                length++;
            // get the maximum
            res = max(res, length);
        }
    }
    return res;
}

int main()
{
    vector<int> test = {100, 4, 200, 1, 3, 2};
    int res = longestConsecutive(test);
    cout << res << endl;
    return 0;
}
