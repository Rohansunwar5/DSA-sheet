#include <bits/stdc++.h>
using namespace std;

int main()
{

  int n;
  cin >> n;
  int i = 0;
  int arr[n];
  int even, odd;
  while (i < n)
  {
    if (arr[i] % 2 == 0)
    {
      even += arr[i];
    }
    else
    {
      odd += arr[i];
    }
    i++;
  }
  cout << even << " ";
  cout << odd;
  return 0;
}