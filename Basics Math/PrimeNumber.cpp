#include <bits/stdc++.h>
using namespace std;

void checkPrime(int n)
{
  int count = 0;
  for (int i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      count++;
      if ((n / i) != i)
      {
        count++;
      }
    }
  }
  if (count == 2)
  {
    cout << "is Prime";
  }
  else
    cout << "not Prime";
}
int main()
{
  int n = 5;
  checkPrime(n);
  return 0;
}