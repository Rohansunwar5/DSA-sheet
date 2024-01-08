#include <bits/stdc++.h>
using namespace std;

void printP(int n)
{
  for (int i = 0; i < n; i++)
  {

    for (char ch = 'E' - i; ch <= 'E'; ch++)
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