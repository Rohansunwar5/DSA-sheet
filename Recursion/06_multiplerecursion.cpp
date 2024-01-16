#include <bits/stdc++.h>
using namespace std;

int multipleRecursion(int n)
{
  if (n <= 1)
  {
    return n;
  }
  // int last = multipleRecursion(n - 1);
  // int slast = multipleRecursion(n - 2);
  // return last + slast;
  return multipleRecursion(n - 1) + multipleRecursion(n - 2);
}

int main()
{
  int n = 6;
  cout << "Fibonacci series up to " << n << ": " << multipleRecursion(n);
  return 0;
}

// TC => 2(power n) exponential