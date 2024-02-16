int merge(vector<int> &a, int low, int mid, int high)
{

  vector<int> temp;

  int left = low; // left halve pointer

  int right = mid + 1; // right halve pointer

  int cnt = 0;

  while (left <= mid && right <= high)
  {

    if (a[left] <= a[right])
    {

      temp.push_back(a[left]);

      left++;
    }

    // right is smaller

    else
    {

      temp.push_back(a[right]);

      cnt += (mid - left + 1);

      right++;
    }
  }

  while (left <= mid)
  {

    temp.push_back(a[left]);

    left++;
  }

  while (right <= high)
  {

    temp.push_back(a[right]);

    right++;
  }

  // transferring back to a

  for (int i = low; i <= high; i++)
  {

    a[i] = temp[i - low];
  }

  return cnt;
}

int ms(vector<int> &a, int low, int high)
{

  int cnt = 0;

  if (low >= high)
    return cnt;

  int mid = (low + high) / 2;

  cnt += ms(a, low, mid); // left halve

  cnt += ms(a, mid + 1, high); // right halve

  cnt += merge(a, low, mid, high); // merging both

  return cnt;
}

int numberOfInversions(vector<int> &a, int n)
{

  // Write your code here.

  return ms(a, 0, n - 1);
}