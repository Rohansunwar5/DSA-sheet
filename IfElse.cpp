#include <bits/stdc++.h>
using namespace std;
// write a program to take the age and print if they are adult ot not
int main()
{
  int age;
  cout << "Enter your age: ";
  cin >> age;

  if (age >= 18)
  {
    cout << "You are an adult : " << age << endl;
  }
  else
  {
    cout << "You are not an adult :  " << age << endl;
  }
  return 0;
}