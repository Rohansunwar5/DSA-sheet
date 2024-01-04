#include <bits/stdc++.h>
using namespace std;
// write a program to take the age and print if they are adult ot not
int main()
{
  // question 1
  //  int age;
  //  cout << "Enter your age: ";
  //  cin >> age;

  // if (age >= 18)
  // {
  //   cout << "You are an adult : " << age << endl;
  // }
  // else
  // {
  //   cout << "You are not an adult :  " << age << endl;
  // }
  // return 0;

  // question 2:
  /*
  below 25 =>F
  25 - 44 =>E
  45 - 49 =>D
  50 - 59 =>C
  60 - 79 =>B
  80 & above => A
   */

  /*
  int marks;
  cout << "Enter your marks: ";
  cin >> marks;
  if (marks < 25)
  {
    cout << "Your grade is F";
  }
  else if (marks <= 44)
  {
    cout << "Your grade is E";
  }
  else if (marks <= 49)
  {
    cout << "Your grade is D";
  }
  else if (marks <= 59)
  {
    cout << "Your grade is C";
  }
  else if (marks <= 79)
  {
    cout << "Your grade is B";
  }
  else
  {
    cout << "Your grade is A";
  } */

  // question 3:
  /*
  1.if age < 18 => print not eligible
  2.if age >= 18 => print eligible
  3.if age >= 55 and age <=57 => eligilbe but reitirement soon
  4.if age > 57 => print => retirement time
  */
  int age;
  cout << "Enter your age: ";
  cin >> age;

  if (age < 18)
  {
    cout << "Not Eligible for job" << endl;
  }
  else if (age <= 57)
  {
    cout << "Eligible for job";
    if (age >= 55)
    {
      cout << ",but Retirement Soon!";
    }
  }
  else
  {
    cout << "Retirement time ";
  }

  return 0;
}