#include <bits/stdc++.h>
using namespace std;
// functions are a set of code that performs certain something for you
//  functions are used to modularise code
//  functions are used to increase readability
//  functions prevent repetation of writing same code

// types =>
// void => doesnt return anything,
// return => , parameterised, non parametarised

void printName(string name)
{
  cout << "Hey " << name << " Good Morning" << endl;
}

int sum()
{
  cout << "Enter two numbers" << endl;
  int n1, n2;
  cin >> n1 >> n2;
  int n3 = n1 + n2;
  return n3;
}

int main()
{
  // string name;
  // cin >> name;
  // printName(name);

  // string name2;
  // cin >> name2;
  // printName(name2);
  int res = sum();
  cout << res;
  return 0;
}

// if a function is a return type and if there is not return statement within the function, it will always throw a garbage value, so always make sure to give a return statement even if conditions check or not
