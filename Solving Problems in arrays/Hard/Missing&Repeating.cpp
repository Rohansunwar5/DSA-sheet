// using hash arr
vector<int> findMissingRepeatingNumbers(vector<int> a)
{
  int n = a.size();
  int hasharr[n + 1] = {0};
  int repeating = -1, missing = -1;
  for (int i = 0; i < n; i++)
  {
    hasharr[a[i]]++;
  }
  for (int i = 1; i <= n; i++)
  {
    if (hasharr[i] == 2)
      repeating = i;
    else if (hasharr[i] == 0)
      missing = i;

    if (repeating != -1 && missing != -1)
    {
      break;
    }
  }
  return {repeating, missing};
}