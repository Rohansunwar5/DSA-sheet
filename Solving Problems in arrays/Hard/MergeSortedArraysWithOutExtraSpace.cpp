#include <bits/stdc++.h>

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b)
{
  int left = a.size() - 1;
  int right = 0;

  while (left >= 0 && right < b.size())
  {
    if (a[left] >= b[right])
    {
      swap(a[left], b[right]);
      left--, right++;
    }
    else
    {
      break;
    }
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
}

// Using Gap Method
// tc = log2(n+m) x O(n+m)
#include <bits/stdc++.h>
void swapifGreater(vector<long long> &a, vector<long long> &b, int index1, int index2)
{
  if (a[index1] > b[index2])
  {
    swap(a[index1], b[index2]);
  }
}
void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b)
{
  int n = a.size();
  int m = b.size();
  int len = (n + m);
  int gap = (len / 2) + (len % 2);

  while (gap > 0)
  {
    int left = 0;
    int right = left + gap;

    while (right < len)
    {
      // a and b
      //  taking right -n so that the indexes of the right array don't get mixed up
      if (left < n && right >= n)
      {
        swapifGreater(a, b, left, right - n);
      }
      // b and b
      //  same here, as we are operating only on the right part
      else if (left >= n)
      {
        swapifGreater(b, b, left - n, right - n);
      }
      // a and a
      else
      {
        swapifGreater(a, a, left, right);
      }
      left++, right++;
    }
    if (gap == 1)
      break;
    gap = (gap / 2) + (gap % 2);
  }
}