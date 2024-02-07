vector<int> superiorElements(vector<int> &a)
{
  vector<int> ans;
  int maxi = INT_MIN;
  int n = a.size();
  for (int i = n - 1; i >= 0; i--)
  {
    if (a[i] > maxi)
    {
      ans.push_back(a[i]);
    }
    // keeping track of right element
    maxi = max(a[i], maxi);
  }
  sort(ans.begin(), ans.end());
  return ans;
}