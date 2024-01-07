#include <bits/stdc++.h>
using namespace std;

/*
 *
 *  *
 *  *  *
 *  *  *   *
 *
 *
 */

int printPattern(int n)
{
  for (int i = 0; i < n; i++)
  {
    // printing spaces
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    // stars
    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << "*";
    }
    // space
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}

int main()
{
  int n = 5;
  printPattern(n);
  return 0;
}
