#include <bits/stdc++.h>
using namespace std;

/*
 1
 1 2
 1 2 3
 1 2 3 4
 */

int printPattern(int n)
{
  for (int i = 0; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
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
