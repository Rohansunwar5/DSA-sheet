#include <bits/stdc++.h>
using namespace std;

// print all division
void printDivision(int n)
{
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      cout << i << " ";
    }
  }
}
void sumOfAllDivisors(int n)
{
  int sum = 0;
  for (int i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      sum += i;
      if ((n / i) != 0)
      {
        sum += (n / i);
      }
    }
  }
  cout << sum;
}

void optimised(int n)
{
  // we are string it in the vector so we can  return the sorted numbers at the end of the loop
  vector<int> ls;
  // for (int i = 1; i <= sqrt(n); i++)
  // we can also go for i * i inseted of sqrt
  // 6 * 6 <=36 , the moment it goes to 7 the loop breaks
  // 7 * 7 <=49 (wrong)
  // now tc => O(sqrt(n))
  for (int i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      ls.push_back(i);
      if ((n / i) != i)
      {
        ls.push_back(n / i);
      }
    }
  }
  sort(ls.begin(), ls.end());
  for (auto s : ls)
  {
    cout << s << " ";
  }
}
void optimisedSum(int n)
{
  // we are string it in the vector so we can  return the sorted numbers at the end of the loop
  vector<int> ls;
  // for (int i = 1; i <= sqrt(n); i++)
  // we can also go for i * i inseted of sqrt
  // 6 * 6 <=36 , the moment it goes to 7 the loop breaks
  // 7 * 7 <=49 (wrong)
  // now tc => O(sqrt(n))
  int sum = 0;
  for (int i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      ls.push_back(i);
      if ((n / i) != i)
      {
        ls.push_back(n / i);
      }
    }
  }
  sort(ls.begin(), ls.end());
  for (auto s : ls)
  {
    sum = sum + s;
  }
  cout << sum;
}

int main()
{
  int n = 5;
  // printDivision(n);
  sumOfAllDivisors(n);
  // optimised(n);
  // optimisedSum(n);
  // cout << sumOfAllDivisors;

  return 0;
}