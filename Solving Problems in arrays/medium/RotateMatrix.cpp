#include <vector>

void rotateMatrix(vector<vector<int>> &mat)
{
  // Write your code here.
  int n = mat.size();
  // transpose
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      swap(mat[i][j], mat[j][i]);
    }
  }
  // reversing
  for (int i = 0; i < n; i++)
  {
    // row is mat[i];
    reverse(mat[i].begin(), mat[i].end());
  }
}