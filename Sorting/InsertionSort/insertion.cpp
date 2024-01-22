#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
  for (int i = 0; i <= n; i++)
  {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
      int temp = arr[j - 1];
      arr[j - 1] = arr[j];
      arr[j] = temp;
      j--;
    }
  }
}

int main()
{
  int arr[] = {43, 51, 11, 45, 53};
  int n = 5;
  bubble_sort(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

// O(n2) -> WORST AND AVERAGE
// O(N) -> BEST