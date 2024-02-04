// - 🧠 The current topic is Kadane's Algorithm, specifically focusing on solving the Maximum Subarray Sum problem.
// - 📚 The problem involves finding the maximum sum of a contiguous subarray within an array.
// - 🔄 The initial approach discussed is a brute-force solution iterating through all possible subarrays, with a time complexity of O(n^3).
// - 🚀 A more optimized solution involves iterating through the array, updating the sum and the maximum sum, dropping negative sums, resulting in a time complexity of O(n^2).
// - 🌐 The most optimal solution employs Kadane's Algorithm, dynamically updating the sum and maintaining start and end indices for the maximum subarray, with a time complexity of O(n).
// - 🔄 An additional step is added to track the start and end indices of the maximum subarray for later retrieval.
// - 🏆 The code implementation provided aims to find the maximum subarray sum, and the video encourages viewers to attempt the problem.

// by using kadens algo
class Solution
{
public:
  int maxSubArray(vector<int> &nums)
  {
    int maxi = INT_MIN;
    int sum = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
      sum += nums[i];

      if (sum > maxi)
      {
        maxi = sum;
      }

      if (sum < 0)
      {
        sum = 0;
      }
    }
    return maxi;
  }
};