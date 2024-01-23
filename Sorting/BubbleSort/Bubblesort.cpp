#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
  for (int i = n - 1; i >= 0; i--)
  {
    int didSwap = 0;
    for (int j = 0; j <= i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        didSwap = 1;
      }
    }
    if (didSwap == 0)
    {
      break;
    }
  }
}
void rec_buuble(int arr[], int n)
{
  int i = n - 1;
  if (i >= 0)
  {
    for (int j = 0; j <= i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
    rec_buuble(arr, n - 1);
  }
}

int main()
{
  int arr[] = {93, 51, 11, 15, 63};
  int n = 5;
  rec_buuble(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

// O(n2) -> WORST AND AVERAGE
// O(N) -> BEST