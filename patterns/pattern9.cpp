#include <bits/stdc++.h>
using namespace std;

void printP(int n)
{
  for (int i = 0; i < n; i++)
  {
    // spaces
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    // stars
    for (int j = 0; j < 2 * i + 1; j++)
    {
      cout << "*";
    }
    // spaces
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
  for (int i = 0; i < n; i++)
  {
    // spaces
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    // stars
    for (int j = 0; j < 2 * n - (2 * i + 1); j++)
    {
      cout << "*";
    }
    // spaces
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}

int main()
{
  int n = 5;
  printP(n);
  return 0;
}