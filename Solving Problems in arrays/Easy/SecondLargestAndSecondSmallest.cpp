#include <bits/stdc++.h>
using namespace std;

int secondSmallest(int n, vector<int> &a)
{
  int Smallest = a[0];
  int SecondSmallest = INT_MAX; // Initialize to INT_MAX
  for (int i = 1; i < n; i++)
  {
    if (a[i] < Smallest)
    {
      SecondSmallest = Smallest;
      Smallest = a[i];
    }
    else if (a[i] > Smallest && a[i] < SecondSmallest)
    {
      SecondSmallest = a[i];
    }
  }
  return SecondSmallest;
}

int secondLargest(int n, vector<int> &a)
{
  int Largest = a[0];
  int SecondLargest = -1; // Initialize to -1
  for (int i = 1; i < n; i++)
  {
    if (a[i] > Largest)
    {
      SecondLargest = Largest;
      Largest = a[i];
    }
    else if (a[i] < Largest && a[i] > SecondLargest)
    {
      SecondLargest = a[i];
    }
  }
  return SecondLargest;
}

vector<int> getSecondOrderElements(int n, vector<int> a)
{
  int secLargest = secondLargest(n, a);
  int secSmallest = secondSmallest(n, a);
  return {secLargest, secSmallest};
}

int main()
{
  vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
  vector<int> result = getSecondOrderElements(arr.size(), arr);

  cout << "Second Largest: " << result[0] << endl;
  cout << "Second Smallest: " << result[1] << endl;

  return 0;
}
