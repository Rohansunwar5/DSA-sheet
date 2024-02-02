// using map
#include <bits/stdc++.h>;
using namespace std;

int getSingleElement(vector<int> &arr)
{
  map<int, int> mpp;
  int n = arr.size();
  for (int i = 0; i < n; i++)
  {
    mpp[arr[i]]++;
  }
  for (auto it : mpp)
  {
    if (it.second == 1)
    {
      return (it.first);
    }
  }
}

// using xor
#include <vector>
// since xor ^ xor cancels each other we are using xor and returning the number with single occurence
int getSingleElement(vector<int> &arr)
{
  int XOR = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    XOR = XOR ^ arr[i];
  }
  return XOR;
}
