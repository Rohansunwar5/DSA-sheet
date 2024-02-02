// Keep a counter var
// keep a max var to keep track of maximum number of elements present consequitively
class Solution
{
public:
  int findMaxConsecutiveOnes(vector<int> &nums)
  {
    int cnt = 0;
    int maxi = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] == 1)
      {
        cnt++;
        maxi = max(cnt, maxi);
      }
      else
      {
        cnt = 0;
      }
    }
    return maxi;
  }
};