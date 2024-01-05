#include <bits/stdc++.h>
using namespace std;

void loopAround(int arr[], int n)
{
  arr[0] += 100;
  cout << "The value in function" << arr[0] << endl;
}

int main()
{
  // int arr[10];
  // for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
  // {
  //   cout << "Enter the array elements" << i + 1 << endl;
  //   cin >> arr[i];
  // }
  int n = 5;
  int arr[n];
  for (int i = 0; i <= n - 1; i++)
  {
    cout << "Enter the array elements" << i + 1 << endl;
    cin >> arr[i];
  }
  loopAround(arr, n);
  cout << "The value in main function" << arr[0] << endl;
}

// when we are passing a array in the function NOTE: it will always go with reference which means the orginal value can also be changed