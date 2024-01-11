#include <bits/stdc++.h>
using namespace std;

void ExplainExtra()
{
  sort(a, a + n);           // sorting an array
  sort(v.begin(), v.end()); // vector sorting
  sort(a + 2, a + 4);       // => 1,3,5,4  => since a+2 is from 5 to digit after 4 i.e meaning only the array from 5 to +1 number after 4 is sorted so the end value we get is 1,3,4,5

  // for arrays to be sorted in descending order we write {1,3,5,2}
  sort(a, a + n, greater<int>); // 5,3,2,1

  // we are declaring pair array over here
  pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
  // ..sort it according to second element
  // if second element is ame , then sort according to the first element but in descending

  sort(a, a + n, comp); //{{4,1}, {2,1}, { 1,2}}
  // comp here is self written compareator

  int num = 6;
  int cnt = __builtin_popcount(); // => returns the set bits

  // if the built in popcorn is long long
  long long num = 14562436741245;
  int cnt = __builtin_popcountll(); // add ll

  // permutation => to return all possible permutation, start by first sorting the numbers to get all the possible permutation

  string s = "123";
  sort(s.begin(), s.end());

  do
  {
    cout << s << endl;
  } while (next_permutation(s.begin(), s.end));

  int maxi = *max_element(a, a + n); // returning the maximum element
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
  // while writing a comparator try to first analyze the data type
  if (p1.second < p2.second)
    return true;
  if (p1.second > p2.second)
    return flase;
  // if they are both same
  if (p1.first > p2.first)
    return true;
  else
    return false;
}

int main()
{
}