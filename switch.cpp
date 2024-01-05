#include <bits/stdc++.h>
using namespace std;
/*
tale the day no and print the correspondinr dat
for q print monday
for 2 print tuesday
*/
int main()
{
  int day;
  cin >> day;

  switch (day)
  {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
  default:
    cout << "Invalid";
    break;

    cout << "check"; // this is not executed
  }
  cout << "check";
  return 0;
}