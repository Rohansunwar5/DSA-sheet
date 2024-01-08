#include <bits/stdc++.h>
using namespace std;

void printP(int n)
{

  for (int i = 1; i <= n; i++)
  {
    for (char ch = 'A'; ch < 'A' + i; ch++)
    {
      cout << ch << " ";
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