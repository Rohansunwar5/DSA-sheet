// using 2 pointer
#include <bits/stdc++.h>
void sortArray(vector<int> &arr, int n)
{
  int count0 = 0, count1 = 0, count2 = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
      count0++;
    else if (arr[i] == 1)
      count1++;
    else
      count2++;
  }
  for (int i = 0; i < count0; i++)
  {
    arr[i] = 0;
  }
  for (int i = count0; i < count0 + count1; i++)
  {
    arr[i] = 1;
  }
  for (int i = count1 + count0; i < n; i++)
  {
    arr[i] = 2;
  }
}

// using dutch national flag algo
class Solution
{
public:
  void sortColors(vector<int> &nums)
  {
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;
    while (mid <= high)
    {
      if (nums[mid] == 0)
      {
        swap(nums[mid], nums[low]);
        low++;
        mid++;
      }
      else if (nums[mid] == 1)
      {
        mid++;
      }
      else
      {
        swap(nums[mid], nums[high]);
        high--;
      }
    }
  }
};
