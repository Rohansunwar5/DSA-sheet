class Solution
{
public:
  bool isPalindrome(int x)
  {
    int temp = x;
    long ans = 0;
    if (x == 0 || x == 1)
    {
      return true;
    }
    while (x > 0)
    {
      int ld = x % 10;
      ans = (ans * 10) + ld;
      x = x / 10;
    }
    if (ans == temp)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
};