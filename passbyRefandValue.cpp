#include <bits/stdc++.h>
using namespace std;

void PassByValue(string name)
{
  // cout << num << endl;
  // num += 10;
  // cout << num << endl;
  // num += 10;
  // cout << num << endl;
  name[0] = 'B';
  cout << name << endl;
  name[2] = 'b';
  cout << name << endl;
}
// pass by Reference => send the address of the original value so any change in the value within the function the original value also gets affected
void PassByReference(string &name) // the & symbol attaches the address of the original value
{
  name[0] = 'B';
  cout << name << endl;
}

int main()
{
  // int num = 10;
  string Myname = "Rohan";

  // PassByValue(Myname); // value being sent which is a copyof org value
  // cout << Myname << endl;  // original still stays the smae
  PassByReference(Myname); // address being sent of org value
  cout << Myname << endl;  // original changes
  return 0;
  // Since the function only give the value, whatever calculations are peformed within the function or returned, the original value of the variable dosen't change within the main function
}