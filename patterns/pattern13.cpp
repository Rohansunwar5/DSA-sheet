#include <bits/stdc++.h>
using namespace std;

void printP(int n)
{
  int a = 1;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << a << " ";
      a++;
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