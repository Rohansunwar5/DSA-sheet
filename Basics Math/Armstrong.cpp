// the cube value of each digit sums up to the exact number
// ex: 137 = 1cube + 3 cube + 7 cube => 137
// this is called armstring number

#include <bits/stdc++.h>
using namespace std;

void checkArmstringNum(int n)
{
  int dub = n;
  int sum = 0;
  while (n > 0)
  {
    int ld = n % 10;
    sum = sum + (ld * ld * ld);
    n = n / 10;
  }
  if (sum == dub)
    cout << dub << " "
         << ": is an armstrong number ";
  else
    cout << dub << " "
         << ": is an not armstrong number ";
}
int main()
{
  int n = 153;
  checkArmstringNum(n);
  return 0;
}