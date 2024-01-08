#include <bits/stdc++.h>
using namespace std;

void printP(int n)
{
  for (int i = 1; i <= n; i++)

  {

    char x = 'A';

    for (int j = n - i; j > 0; j--)

    {

      cout << " ";
    }

    for (int j = 1; j <= i; j++)

    {

      cout << x << " ";

      if (j != i)
      {
        x += 1;
      }
    }

    for (int j = 1; j <= i - 1; j++)

    {

      char y = x - j;

      cout << y << " ";
    }

    cout << endl;
  }
}

int main()
{
  int n = 3;
  printP(n);
  return 0;
}