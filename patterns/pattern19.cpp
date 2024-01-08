#include <bits/stdc++.h>
using namespace std;

void printP(int n)
{
  int spaces = 0;
  for (int i = 1; i <= n; i++)
  {
    // number
    for (int j = 0; j <= n - i; j++)
    {
      cout << "*";
    }

    // spaces
    for (int j = 1; j <= spaces; j++)
    {
      cout << " ";
    }

    // number
    for (int j = 0; j <= n - i; j++)
    {
      cout << "*";
    }

    cout << endl;
    spaces += 2;
  }
  spaces = 2 * n - 2;
  for (int i = 1; i <= n; i++)
  {

    // stars
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    // spaces
    for (int j = 0; j < spaces; j++)
    {
      cout << " ";
    }
    for (int j = 1; j <= i; j++)
    {
      cout << "*";
    }
    spaces -= 2;
    cout << endl;
  }
}

int main()
{
  int n = 5;
  printP(n);
  return 0;
}