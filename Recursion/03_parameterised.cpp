// sum of first n numbers

#include <bits/stdc++.h>
using namespace std;
// parametarised way => printing

void resum(int n, int sum)
{
  if (n < 1)
  {
    cout << sum << endl;
    return;
  }
  resum(n - 1, sum + n);
}
// functional => returning
int functionalrecursive(int n)
{
  if (n == 0)
  {
    return 0;
  }
  return n + functionalrecursive(n - 1);
}

long long factorial(long long n)
{
  if (n == 1)
  {
    return 1;
  }
  return n * factorial(n - 1);
}

int main()
{
  long long n = 5;
  // resum(n, 0);
  // cout << "Sum is :" << functionalrecursive(n) << endl;
  cout << "Factorial is :" << factorial(n) << endl;
}