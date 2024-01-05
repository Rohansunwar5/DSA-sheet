#include <bits/stdc++.h>
using namespace std;

int main()
{
  // int arr[5]; // declaration of array
  // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
  // arr[3] = 16;
  // cout << arr[3];

  // 2d array
  int arr[3][5]; // 3 is the row , 5 is the column

  // in the array when a index value is not filled up then, it it automatically filled up with garbage value

  arr[1][2] = 32;
  cout << arr[1][2];

  return 0;
}