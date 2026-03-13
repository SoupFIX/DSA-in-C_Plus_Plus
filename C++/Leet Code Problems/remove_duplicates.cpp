#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stdlib.h>
using namespace std;
int remove_duplicate(vector<int> &nums)
{
    int len = nums.size();
    string s = "_";
    int x = atoi(s);
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len - 1; i++)
        {
            if (nums[i] == nums[j])
            {
                nums[j] = nums[j + 1];
                nums[j + 2] = ;
            }
        }
    }
}
int main()
{
    vector<int> nums = {1, 1, 2};
    remove_duplicate(nums);
}