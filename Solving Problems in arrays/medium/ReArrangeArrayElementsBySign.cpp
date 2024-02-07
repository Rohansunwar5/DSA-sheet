// taking a extra arary to inplace the +ve and -ve numbers according to the indexees
#include <bits/stdc++.h>
vector<int> alternateNumbers(vector<int> &a)
{
  int n = a.size();
  vector<int> pos;
  vector<int> neg;
  for (int i = 0; i < a.size(); i++)
  {
    if (a[i] > 0)
    {
      pos.push_back(a[i]);
    }
    else
    {
      neg.push_back(a[i]);
    }
  }
  for (int i = 0; i < n / 2; i++)
  {
    a[2 * i] = pos[i];
    a[2 * i + 1] = neg[i];
  }

  return a;
}
// using two extra array to take +ve and -ve elemts and placing the original array back
#include <bits/stdc++.h>
vector<int> alternateNumbers(vector<int> &a)
{
  int n = a.size();
  vector<int> pos;
  vector<int> neg;
  for (int i = 0; i < a.size(); i++)
  {
    if (a[i] > 0)
    {
      pos.push_back(a[i]);
    }
    else
    {
      neg.push_back(a[i]);
    }
  }
  for (int i = 0; i < n / 2; i++)
  {
    a[2 * i] = pos[i];
    a[2 * i + 1] = neg[i];
  }

  return a;
}

// when the number of +ve and -ve elemts in the array are not equal
vector<int> alternateNumbers(vector<int> &a)
{
  vector<int> pos, neg;
  int n = a.size();
  for (int i = 0; i < n; i++)
  {
    if (a[i] > 0)
    {
      pos.push_back(a[i]);
    }
    else
    {
      neg.push_back(a[i]);
    }
  }
  if (pos.size() > neg.size())
  {
    for (int i = 0; i < neg.size(); i++)
    {
      a[2 * i] = pos[i];
      a[2 * i + 1] = neg[i];
    }
    int index = neg.size() * 2;
    for (int i = neg.size(); i < pos.size(); i++)
    {
      a[index] = pos[i];
      index++;
    }
  }
  else
  {
    for (int i = 0; i < pos.size(); i++)
    {
      a[2 * i] = pos[i];
      a[2 * i + 1] = neg[i];
    }
    int index = pos.size() * 2;
    for (int i = pos.size(); i < neg.size(); i++)
    {
      a[index] = neg[i];
      index++;
    }
  }
  return a;
}