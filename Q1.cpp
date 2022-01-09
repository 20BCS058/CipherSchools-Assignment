#include <iostream>
using namespace std;

int missing_number(int arr[], int n)
{
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return total - sum;
}

int main()
{
    int nums[] = {3, 0, 1};
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << "The missing number is: " << missing_number(nums, n) << endl;
    return 0;
}