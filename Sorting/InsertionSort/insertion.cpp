#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n)
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
void rec_insertion(int arr[], int i, int n)
{
  if (i <= n)
  {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
      int temp = arr[j - 1];
      arr[j - 1] = arr[j];
      arr[j] = temp;
      j--;
    }
    rec_insertion(arr, i + 1, n);
  }
}
void recursiveSol(int arr[], int n)
{
  rec_insertion(arr, 0, n);
}

int main()
{
  int arr[] = {93, 21, 111, 45, 3};
  int n = 5;
  recursiveSol(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

// O(n2) -> WORST AND AVERAGE
// O(N) -> BEST