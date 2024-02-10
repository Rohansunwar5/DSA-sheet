vector<int> majorityElement(vector<int> v)
{
  // Using HashMap;
  map<int, int> mpp;
  int mm = (v.size() / 3) + 1;
  vector<int> ls;
  for (int i = 0; i < v.size(); i++)
  {
    mpp[v[i]]++;
    if (mpp[v[i]] == mm)
    {
      ls.push_back(v[i]);
    }
  }
  sort(ls.begin(), ls.end());
  return ls;
  // Using modified moore's voting algo
  int count1 = 0, count2 = 0;
  int el1 = INT_MIN;
  int el2 = INT_MIN;
  for (int i = 0; i < v.size(); i++)
  {
    if (count1 == 0 && el2 != v[i])
    {
      count1 = 1;
      el1 = v[i];
    }
    else if (count2 == 0 && el1 != v[i])
    {
      count2 = 1;
      el2 = v[i];
    }
    else if (el1 == v[i])
      count1++;
    else if (el2 == v[i])
      count2++;
    else
    {
      count2--;
      count1--;
    }
  }
  // maunal checking
  count1 = 0, count2 = 0;
  int mm = (int)(v.size() / 3) + 1;
  vector<int> ans;
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] == el1)
      count1++;
    if (v[i] == el2)
      count2++;
  }
  if (count1 >= mm)
    ans.push_back(el1);
  if (count2 >= mm)
    ans.push_back(el2);
  sort(ans.begin(), ans.end());
  return ans;
}