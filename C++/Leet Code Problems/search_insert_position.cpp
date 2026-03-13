#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int binary_search(vector<int> nums, int target)
    {
        int len = nums.size();
        int start = 0, end = len - 1, mid, i = 0;
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            if (nums[mid] > target)
            {
                end = mid;
                if (start <= target && target <= nums[end])
                {
                    return start + 1;
                }
            }
            if (nums[mid] < target)
            {
                start = mid;
                if (start <= target && target <= end)
                {
                    return (mid + 1);
                }
            }
        }
        return -1;
    }
};
int main()
{
    int m, target, result = 0;
    vector<int> nums(m);
    cout << "enter the size : ";
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cout << "enter the element : ";
        cin >> nums[i];
    }
    cout << "Enter the target element : ";
    cin >> target;
    Solution s1;
    result = s1.binary_search(nums, target);
    cout << result;
    return 0;
}