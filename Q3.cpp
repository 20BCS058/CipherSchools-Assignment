#include <iostream>
using namespace std;

int fun(int *arr, int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return arr[0];
    if (n == 2)
        return max(arr[0], arr[1]);
    int max_loot[n];
    max_loot[0] = arr[0];
    max_loot[1] = max(arr[0], arr[1]);
    for (int i = 2; i < n; i++)
        max_loot[i] = max(arr[i] + max_loot[i - 2], max_loot[i - 1]);
    return max_loot[n - 1];
}

int main()
{
    int nums[] = {1, 2, 3, 1};
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << "Maximum loot possible: " << fun(nums, n);
    return 0;
}