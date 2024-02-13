// brute
for (int i = 0; i < n; i++)
{
  for (int j = i; j < n; j++)
  {
    int xor = 0;
    for (int k = 0; k <= j - i; k++)
    {
      xor ^= arr[k];
      if (xor == k)
        cnt++;
    }
  }
}
// better

for (int i = 0; i < n; i++)
{
  int xor = 0;
  for (int j = i; j < n; j++)
  {
    xor ^= arr[j];
    if (xor == k)
      cnt++;
  }
}

// optimal
