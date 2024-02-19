// itreative
int search(vector<int> &nums, int target)
{
  int low = 0;
  int n = nums.size();
  int high = n - 1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (target == nums[mid])
      return mid;
    else if (target > nums[mid])
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return -1;
}

class Solution
{
public:
  int rq(vector<int> &nums, int low, int high, int target)
  {
    if (low > high)
      return -1;
    int mid = (low + high) / 2;
    if (nums[mid] == target)
      return mid;
    else if (target > nums[mid])
    {
      return rq(nums, mid + 1, high, target);
    }
    else
    {
      return rq(nums, low, mid - 1, target);
    }
  }

  int search(vector<int> &nums, int target)
  {
    return rq(nums, 0, nums.size() - 1, target);
  }
};