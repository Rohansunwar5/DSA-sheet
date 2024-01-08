#include <bits/stdc++.h>
using namespace std;

void printP(int n)
{
  for (int i = 0; i < n; i++)
  {
    // space
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }

    // letter

    for (char ch = 'A'; ch < 'A' + (2 * i - 1); ch++)
    {
      if (i % 2 == 0)
      {
        cout << ch;
      }
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
  printP(n);
  return 0;
}