#include <iostream>
using namespace std;

int fun(int arr[], int n, int t)
{
    int sum = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (abs(t - sum) > abs(t - (arr[i] + arr[j] + arr[k])))
                    sum = (arr[i] + arr[j] + arr[k]);
            }
        }
    }
    return sum;
}

int main()
{
    int nums[] = {-1, 2, 1, -4}, target = 1;
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << "The desired sum is: " << fun(nums, n, target);
    return 0;
}