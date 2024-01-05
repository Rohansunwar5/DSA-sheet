#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s = "Rohan";
  int len = s.length();
  // cout << len;
  s[len - 1] = 'z';
  cout << s[len - 1];
  cout << s;
  return 0;
}