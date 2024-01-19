#include <bits/stdc++.h>
using namespace std;

int countFrequency(int n, int x, int &nums)
{
}

int main()
{
  int n = 6;
  // int x = 10;
  int nums = {1, 3, 1, 9, 2, 7};
  map<n, 0> mpp;
  for (int i = 0; i < n; i++)
  {
    mpp[nums[i] - 1] += 1;
  }
  for (auto it : mpp)
  {
    cout << it.second << endl;
  }
  return 0;
}