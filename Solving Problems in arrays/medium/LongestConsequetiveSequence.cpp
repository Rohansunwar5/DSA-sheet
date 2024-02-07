// Brute force using linear search

bool ls(vector<int> &a, int x)
{
  for (int i = 0; i < a.size(); i++)
  {
    if (a[i] == x)
    {
      return true;
    }
  }
  return false;
}

int longestSuccessiveElements(vector<int> &a)
{
  int longest = 1;
  for (int i = 0; i < a.size(); i++)
  {
    int x = a[i];
    int count = 1;
    while ((ls(a, x + 1)) == true)
    {
      x += 1;
      count += 1;
    }
    longest = max(longest, count);
  }
  return longest;
}
// Better solution by first sorting the array
// Better solution by first sorting the array
int longestSuccessiveElements(vector<int> &a)
{
  int n = a.size();
  if (n == 0)
    return 0;
  sort(a.begin(), a.end());
  int longest = 1;
  int count = 0;
  int lastSmallest = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (a[i] - 1 == lastSmallest)
    {
      count += 1;
      lastSmallest = a[i];
    }
    else if (a[i] != lastSmallest)
    {
      count = 1;
      lastSmallest = a[i];
    }
    longest = max(longest, count);
  }

  return longest;
}

// using set and avoid re - itreation within the set
int longestSuccessiveElements(vector<int> &a)
{
  int n = a.size();
  if (n == 0)
    return 0;
  int longest = 1;
  unordered_set<int> st;
  for (int i = 0; i < n; i++)
  {
    st.insert(a[i]);
  }
  for (auto it : st)
  {
    if (st.find(it - 1) == st.end())
    {
      int cnt = 1;
      int x = it;
      while (st.find(x + 1) != st.end())
      {
        x += 1;
        cnt += 1;
      }
      longest = max(longest, cnt);
    }
  }
  return longest;
}