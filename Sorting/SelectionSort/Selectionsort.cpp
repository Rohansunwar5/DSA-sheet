#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int min = i;
    for (int j = i; j < n; j++)
    {
      if (arr[min] > arr[j])
      {
        min = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }
}

int main()
{
  int arr[] = {3, -7, 5, 9, 4};
  int n = 5;
  selection_sort(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}