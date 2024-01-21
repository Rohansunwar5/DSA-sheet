#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout << "No. of elements: ";
  cin >> n;
  int arr[n];
  cout << "Elements";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  // pre computation
  map<int, int>
      mpp;
  for (int i = 0; i < n; i++)
  {
    mpp[arr[i]] += 1;
  }

  // itreating over the map
  // 1->2
  // 2->1
  // 3->2
  //   for (auto it : mpp)
  //   {
  //     cout << it.first << "->" << it.second << endl;
  //   }

  int queries;
  cout << "Enter the number of queries: ";
  cin >> queries;
  while (queries--)
  {
    int number;
    cin >> number;
    // fetch

    cout << "same: " << mpp[number] << endl;
  }
  return 0;
}