#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cout << "Enter the string: ";
  cin >> s;
  // precomputation for all the char
  // int hash[256] = {0};
  // for (int i = 0; i < s.size(); i++)
  // {
  //   hash[s[i]] += 1;
  // }

  // precomputation for only the small case char
  int hash[26] = {0};
  for (int i = 0; i < s.size(); i++)
  {
    hash[s[i] - 'a']++;
  }

  int q;
  cout << "How many checks: ";
  cin >> q;
  while (q--)
  {
    char c;
    cout << "Enter char: " << endl;
    cin >> c;
    cout << " Repetations: " << endl;
    // fetch for lower case char
    cout << hash[c - 'a'] << endl;
    // fetch for all the char
    // cout << hash[c] << endl;
  }
  return 0;
}