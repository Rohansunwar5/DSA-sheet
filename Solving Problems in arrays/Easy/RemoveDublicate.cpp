// Remove all dublicate
int removeDuplicates(vector<int> &arr, int n)
{
  int i = 0;
  for (int j = 1; j < n; j++)
  {
    if (arr[i] != arr[j])
    {
      arr[i + 1] = arr[j];
      i++;
    }
  }
  return i + 1;
}

// Using Set
class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {
    int n = nums.size();
    set<int> st;
    for (int i = 0; i < n; i++)
    {
      st.insert(nums[i]);
    }
    int index = 0;
    for (auto it : st)
    {
      nums[index] = it;
      index++;
    }
    nums.resize(index);
    return index;
  }
};