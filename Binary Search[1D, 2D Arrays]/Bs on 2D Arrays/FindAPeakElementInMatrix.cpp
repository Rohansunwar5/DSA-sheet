int findmax(vector<vector<int>> &g, int n, int m, int col)
{
  int maxEl = -1;
  int index = -1;
  for (int i = 0; i < n; i++)
  {
    if (g[i][col] > maxEl)
    {
      maxEl = g[i][col];
      index = i;
    }
  }
  return index;
}

vector<int> findPeakGrid(vector<vector<int>> &g)
{
  int n = g.size();
  int m = g[0].size();

  int low = 0, high = m - 1;

  while (low <= high)
  {
    int mid = (low + high) / 2;
    int MaxRow = findMax(g, n, m, mid);
    int left = mid - 1 >= 0 ? g[maxRow][mid - 1] : -1;
    int right = mid + 1 < m ? g[maxRow][mid + 1] : -1;
    if (g[maxRow][mid] > right && g[maxRow][mid] > left)
    {
      return {maxRow, mid};
    }
    else if (g[maxRow][mid] < left)
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  return {-1, -1};
}