// using hashmap, this problem is for both +ve and -ve integers
#include <bits/stdc++.h>
int getLongestSubarray(vector<int> &nums, int k)
{
  map<long long, int> prefixSum;
  long long sum = 0;
  int maxlen = 0;
  for (int i = 0; i < nums.size(); i++)
  {
    sum += nums[i];
    if (sum == k)
    {
      maxlen = max(maxlen, i + 1);
    }
    long long rem = sum - k;
    if (prefixSum.find(rem) != prefixSum.end())
    {
      int len = i - prefixSum[rem];
      maxlen = max(maxlen, len);
    }
    if (prefixSum.find(sum) == prefixSum.end())
    {
      prefixSum[sum] = i;
    }
  }
  return maxlen;
}
// using 2 pointers, this is only applicable to non zero and +ve  numbers
int longestSubarrayWithSumK(vector<int> a, long long k)
{
  int left = 0, right = 0;
  int maxlen = 0;
  long long sum = a[0];
  int n = a.size();

  while (right < n)
  {
    while (left <= right && sum > k)
    {
      sum -= a[left];
      left++;
    }
    if (sum == k)
    {
      maxlen = max(maxlen, right - left + 1);
    }
    right++;
    if (right < n)
    {
      sum += a[right];
    }
  }
  return maxlen;
}