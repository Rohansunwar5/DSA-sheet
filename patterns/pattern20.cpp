#include <bits/stdc++.h>
using namespace std;

void printP(int n)
{
  int space = 2 * n - 2;
  for (int i = 1; i <= 2 * n - 1; i++)
  {
    int stars = i;
    if (i > n)
      stars = 2 * n - i;
    // star
    for (int j = 1; j <= stars; j++)
    {
      cout << "*";
    }
    // space
    for (int j = 1; j <= space; j++)
    {
      cout << " ";
    }
    // star
    for (int j = 1; j <= stars; j++)
    {
      cout << "*";
    }
    cout << endl;
    if (i < n)
      space -= 2;
    else
      space += 2;
  }
}

int main()
{
  int n = 5;
  printP(n);
  return 0;
}