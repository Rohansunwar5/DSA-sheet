// using hashing

#include <bits/stdc++.h>
int majorityElement(vector<int> v)
{
  map<int, int> mpp;
  int n = v.size();
  for (int i = 0; i < n; i++)
  {
    mpp[v[i]]++;
  }
  for (auto it : mpp)
  {
    if (it.second > (n / 2))
    {
      return it.first;
    }
  }
  return -1;
}

// Using moore's voting algo
#include <bits/stdc++.h>
int majorityElement(vector<int> v)
{
  // using mooere's voting algo
  int el;
  int n = v.size();
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (count == 0)
    {
      count = 1;
      el = v[i];
    }
    else if (v[i] == el)
    {
      count++;
    }
    else
    {
      count--;
    }
  }
  // counting the el through out the array
  int countmax = 0;
  for (int i = 0; i < n; i++)
  {
    if (v[i] == el)
    {
      countmax += 1;
    }
  }
  if (countmax > (n / 2))
  {
    return el;
  }
  return -1;
}