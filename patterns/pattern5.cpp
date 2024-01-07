#include <bits/stdc++.h>
using namespace std;

/*
 1
 2 2
 3 3 3
 4 4 4 4
 */

int printPattern(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j < n - i + 1; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}

int main()
{
  int n = 5;
  printPattern(n);
  return 0;
}
