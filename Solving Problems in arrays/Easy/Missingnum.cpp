// Using sum

class Solution
{
public:
  int missingNumber(vector<int> &nums)
  {
    int n = nums.size();
    int sum = n * (n + 1) / 2;
    int s2 = 0;
    for (int i = 0; i < n; i++)
    {
      s2 += nums[i];
    }
    return (sum - s2);
  }
};

// using xor
class Solution
{
public:
  int missingNumber(vector<int> &nums)
  {
    // int xor1 = 0, xor2 = 0;
    // int n = nums.size() -1;
    // for(int i = 0 ;i < n ;i++){
    //     xor2 = xor2 ^ nums[i];
    //     xor1 = xor1 ^ (i );
    // }
    // xor1 = xor1 ^ n ;
    // return (xor1 ^ xor2);
    int xor1 = nums.size();
    for (int i = 0; i < nums.size(); i++)
    {
      xor1 = xor1 ^ nums[i];
      xor1 = xor1 ^ i;
    }

    return xor1;
  }
};
