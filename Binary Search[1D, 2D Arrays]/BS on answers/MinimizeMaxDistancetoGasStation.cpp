// better solution

double minimiseMaxDistance(vector<int> &arr, int k)
{
  int n = arr.size();
  vector<int> howMany(n - 1, 0);
  priority_queue<pair<long double, int>> pq;
  for (int i = 0; i < n - 1; i++)
  {
    pq.push({arr[i + 1] - arr[i], i}); // stores  the difference and index of next element in array
  }
  for (int gasStations = 1; gasStations <= k; gasStations++)
  {
    auto tp = pq.top();
    pq.pop();
    int secInd = tp.second;
    howMany[secInd]++;
    long double iniDiff = arr[secInd + 1] - arr[secInd];
    long double newSecLen = iniDiff / (long double)(howMany[secInd] + 1);
    pq.push({newSecLen, secInd});
  }

  return pq.top().first;
}

// optimal sol
int numberOfGasStationReq(long double dist, vector<int> arr)
{
  int cnt = 0;
  for (int i = 1; i < arr.size(); i++)
  {
    int numberInBetweeen = ((arr[i] - arr[i - 1]) / dist);
    if (arr[i] - arr[i - 1] / dist == numberInBetweeen * dist)
    {
      numberInBetweeen--;
    }
    cnt += numberInBetweeen;
  }
  return cnt;
}

double minimiseMaxDistance(vector<int> &arr, int k)
{
  int n = arr.size();
  long double low = 0;
  long double high = 0;
  for (int i = 0; i < n; i++)
  {
    high = max(high, (long double)(arr[i + 1] - arr[i]));
  }
  long double diff = 1e-6;
  while (high - low > diff)
  {
    long double mid = (low + high) / (2.0);
    int cnt = numberOfGasStationReq(mid, arr);
    if (cnt > k)
    {
      low = mid;
    }
    else
    {
      high = mid;
    }
  }
  return high;
}
