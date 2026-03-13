#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1,
                                  vector<int> &nums2)
    { // m = nums1.length()
        // n = nums2.length()
        int m, n, i;
        cout << "Enter the size of the vector 1 : ";
        cin >> m;
        cout << "Enter the size of the vector 2 : ";
        cin >> n;
        nums1.resize(m);
        nums2.resize(n);
        for (int i = 0; i < m; i++)
        {
            cout << "Enter the element for vector 1 : ";
            cin >> nums1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the element for vector 2 : ";
            cin >> nums2[i];
        }
        if (m != n)
        {
            vector<int> nums3(m + n);
            for (i = 0; i <= (m + n); i++)
            {
                nums3[i] = nums1[i];
                while (i >= (m + 1))
                {
                    nums3[i] = nums2[i];
                }
            }
            double count = 0;
            for (int i = 0; i < (m + n); i++)
            {
                count++;
            }
            double sum = 0;
            for (int i = 0; i <= (m + n); i++)
            {
                sum += nums3[i];
            }
            return (sum / count);
        }
        else
        {
            vector<int> nums3(m);
            for (i = 0; i < m; i++)
            {
                nums3[i] = nums1[i];
            }
            for (i = m - 1; i < n; i++)
            {
                nums3[i] = nums1[i];
            }
            double count = 0;
            for (int i = 0; i < m; i++)
            {
                count++;
            }
            double sum = 0;
            for (int i = 0; i <= m; i++)
            {
                sum += nums3[i];
            }
            return (sum / count);
        }
        return -1;
    }
};
int main()
{
    vector<int> a;
    vector<int> b;
    Solution s1;
    double res = 0;
    res = s1.findMedianSortedArrays(a, b);
    cout << res;
    return 0;
}