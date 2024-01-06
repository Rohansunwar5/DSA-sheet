#include <iostream>
using namespace std;

int dataTypes(string type)
{
  switch (type)
  {
  case "Integer":
    cout << "4" << endl;
    break;
  case "Long":
    cout << "8" << endl;
    break;
  case "Float":
    cout << "4" << endl;
    break;
  case "Double":
    cout << "8" << endl;
    break;
  case "Character":
    cout << "1" << endl;
    break;
  default:
    cout << "Invalid data type" << endl;
  }
  return 0;
}

int main()
{
  string dataType;

  cout << "Enter a data type (Integer, Long, Float, Double, Character): ";
  cin >> dataType;

  dataTypes(dataType);

  return 0;
}
