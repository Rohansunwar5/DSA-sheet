#include <iostream>
#include <vector>

using namespace std;

vector<int> rotateArray(vector<int> arr, int k)
{
  int n = arr.size();
  // the k is the number of shifts to be performed so if the k is greater than the size of the array then we can reduce it by getting the remainder number and only perform that number of shifts
  int d = k % n;

  // storing the elements to be shifted in a temp array
  vector<int> temp(d);
  for (int i = 0; i < d; i++)
  {
    temp[i] = arr[i];
  }

  // now shift the remaining elements to the beginning of the array
  for (int i = d; i < n; i++)
  {
    arr[i - d] = arr[i];
  }

  // now place back the temp elements to the array
  for (int i = n - d; i < n; i++)
  {
    arr[i] = temp[i - (n - d)];
  }

  return arr;
}

int main()
{
  // Example usage
  vector<int> arr = {1, 2, 3, 4, 5};
  int k = 2;

  vector<int> rotatedArr = rotateArray(arr, k);

  cout << "Original Array: ";
  for (int i : arr)
  {
    cout << i << " ";
  }

  cout << "\nRotated Array: ";
  for (int i : rotatedArr)
  {
    cout << i << " ";
  }

  return 0;
}
