/*
Problem statement
You are given a number ’n’.



Find the number of digits of ‘n’ that evenly divide ‘n’.



Note:
A digit evenly divides ‘n’ if it leaves no remainder when dividing ‘n’.


Example:
Input: ‘n’ = 336

Output: 3

Explanation:
336 is divisible by both ‘3’ and ‘6’. Since ‘3’ occurs twice it is counted two times.
*/

int countDigits(int n)
{
  int temp = n;
  int count = 0;
  while (n > 0)
  {
    int rem = n % 10;
    if (rem != 0 && temp % rem == 0)
    {
      count = count + 1;
    }
    n = n / 10;
  }
  return count;
}
