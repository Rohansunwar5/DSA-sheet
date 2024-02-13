class Solution
{
public:
  vector<vector<int>> merge(vector<vector<int>> &intervals)
  {
    vector<vector<int>> ans;
    if (intervals.size() <= 1)
      return intervals;
    sort(intervals.begin(), intervals.end());
    ans.push_back(intervals[0]);
    for (int i = 0; i < intervals.size(); i++)
    {
      if (intervals.empty() || intervals[i][0] > ans.back()[1])
      {
        ans.push_back(intervals[i]);
      }
      else
      {
        ans.back()[1] = max(ans.back()[1], intervals[i][1]);
      }
    }
    return ans;
  }
};