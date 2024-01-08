#include <bits/stdc++.h>
using namespace std;

void printP(int n)
{
  for (int i = 0; i < n; i++)
  {
    char ch = 'A' + i;
    for (int j = 0; j <= i; j++)
    {
      cout << ch;
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