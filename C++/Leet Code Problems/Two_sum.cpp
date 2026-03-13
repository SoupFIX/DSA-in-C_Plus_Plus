#include <iostream>
#include <vector>
using namespace std;
vector<int> Two_sum(vector<int> &nums, int target)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return {i, j};
            }
        }
    }
    // returning empty vector elements
    return {};
}
int main()
{
    int n, target;
    cout << "enter the size : ";
    cin >> n;
    cout << "enter the target : ";
    cin >> target;
    vector<int> nums(n);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << "enter the elements : ";
        cin >> nums[i];
    }
    vector<int> result = Two_sum(nums, target);
    for (int &i : result)
    {
        cout << result[i] << " ";
    }
    return 0;
}