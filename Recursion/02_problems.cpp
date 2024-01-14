#include <bits/stdc++.h>
using namespace std;

// Print name n times
void PrintN(int i, int n)
{
  if (i > n)
  { // base case
    return;
  }
  cout << "Rohan ";
  PrintN(i + 1, n);
}

// print linearly from 1 to n
void printLinearly(int n)
{
  // if (i > n)
  // {
  //   return;
  // }
  // cout << i << " ";
  // printLinearly(i + 1, n);
  if (n == 0)
  {
    return;
  }
  cout << n << " ";
  printLinearly(n - 1);
}

// print from 1 to n using backtracking

void backtracking(int i, int n)
{
  if (i < 1)
  {
    return;
  }
  backtracking(i - 1, n);
  cout << i;
}
void backtrackingN(int i, int n)
{
  if (i == n)
  {
    return;
  }
  backtrackingN(i + 1, n);
  cout << " " << i;
}

int main()
{
  int n = 4;
  // PrintN(1, n);
  // printLinearly(n);
  backtrackingN(1, n);
}
