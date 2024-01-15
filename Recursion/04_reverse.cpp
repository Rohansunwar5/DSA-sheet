#include <bits/stdc++.h>
using namespace std;

void recReverse(int i, int arr[], int n)
{
  if (i >= (n / 2))
  {
    return;
  }
  swap(arr[i], arr[n - i - 1]);
  recReverse(i + 1, arr, n);
}

int main()
{
  int n = 5;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  recReverse(0, arr, n);
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}