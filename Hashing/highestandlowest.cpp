'Coding has over 700 languages', '67% of programming jobs aren’t in the technology industry', 'Coding is behind almost everything that is powered by electricity', 'Knowing how to code is a major requirement for astronomers', 'The first computer didn’t use any electricity', 'Do you know there is a coding language named “Go“', 'Computer programming is one of the fastest-growing careers', 'Fortran (FORmula TRANslation) was the name of the first programming language', 'The first programmer was the daughter of a mad poet', 'Many programming languages share the same structure', 'Coding will soon be as important as reading', 'How many programmers does it take to change a light bulb? None, that’s a hardware problem', 'Why do Java developers wear glasses? Because they can’t C', 'Software and temples are much the same — first we build them, then we pray', 'An engineer will not call it a bug — it’s an undocumented feature', 'In a room full of top software designers, if two agree on the same thing, that’s a majority', 'C programmers never die. They are just cast into void', 'Knock, knock … Who’s there? … *very long pause* … Java', 'The best thing about a boolean is even if you are wrong, you are only off by a bit', 'Linux is only free if your time has no value', 'The computer was born to solve problems that did not exist before', 'Coding has over 700 languages', '67% of programming jobs aren’t in the technology industry', 'Coding is behind almost everything that is powered by electricity', 'Knowing how to code is a major requirement for astronomers', 'The first computer didn’t use any electricity', 'Do you know there is a coding language named “Go“', 'Computer programming is one of the fastest-growing careers', 'Fortran (FORmula TRANslation) was the name of the first programming language', 'The first programmer was the daughter of a mad poet', 'Many programming languages share the same structure', 'Coding will soon be as important as reading', 'How many programmers does it take to change a light bulb? None, that’s a hardware problem', 'Why do Java developers wear glasses? Because they can’t C', 'Software and temples are much the same — first we build them, then we pray', 'An engineer will not call it a bug — it’s an undocumented feature', 'In a room full of top software designers, if two agree on the same thing, that’s a majority', 'C programmers never die. They are just cast into void', 'Knock, knock … Who’s there? … *very long pause* … Java', 'The best thing about a boolean is even if you are wrong, you are only off by a bit', 'Linux is only free if your time has no value', 'The computer was born to solve problems that did not exist before',
New update is available. Click here to update.
Topics
Problem
Submissions
Solutions
Discuss
Highest / Lowest Frequency Elements
bugHunter
Level: Champion
C++ Best Solution : )
Interview problems
168 Views
0 Replies
Published on 14 Jan, 2024
This code is well optimized :-

int minInVector(vector<int> v)
{
  int min = INT_MAX;
  if (v.size() == 1)
  {
    return v[0];
  }
  for (auto it : v)
  {
    if (it < min)
    {
      min = it;
    }
  }
  return min;
}

int minFreq(map<int, int> mpp)
{
  int min = INT_MAX;
  vector<int> v;
  for (auto it : mpp)
  {
    if (it.second < min)
    {
      min = it.second;
    }
  }
  for (auto it : mpp)
  {
    if (it.second == min)
    {
      v.emplace_back(it.first);
    }
  }
  return minInVector(v); // smallest element with min freq
}

int maxFreq(map<int, int> mpp)
{
  int max = INT_MIN;
  vector<int> v;
  for (auto it : mpp)
  {
    if (it.second > max)
    {
      max = it.second;
    }
  }
  for (auto it : mpp)
  {
    if (it.second == max)
    {
      v.emplace_back(it.first);
    }
  }
  return minInVector(v); // smallest element with max freq
}

vector<int> getFrequencies(vector<int> &v)
{
  // Write Your Code Here
  map<int, int> mpp;
  vector<int> res;
  // pre compute
  for (int i = 0; i < v.size(); i++)
  {
    mpp[v[i]]++;
  }
  // fetching
  res.emplace_back(maxFreq(mpp));
  res.emplace_back(minFreq(mpp));
  return res;
}

/*
    Time complexity: O( n )
    Space complexity: O( n )

    Where 'n' is the number of elements in the array.


vector<int> getFrequencies(vector<int>& v) {

    // Declare a variable 'n' which is equal to the size
    // of array 'v'.
    int n = v.size();

    // Declare a unordered map 'freq'
    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        // Increment the frequency of the current element
        freq[v[i]]++;
    }

    // Initializing variables to determine
    // maximum frequency and minimum frequency element
    int maxFreq = 0, minFreq = n;
    int maxElement = 0, minElement = (int)1e9 + 1;

    // Traverse through map to find the elements.
    for (auto it : freq) {
        int count = it.second;
        int element = it.first;

        if (count > maxFreq) {
            // Found an element with frequency maximum among
            // all elements found till now
            maxElement = element;
            maxFreq = count;
        }
        else if(count == maxFreq) {
            // Checking if the current element is smaller or not
            maxElement = min(maxElement, element);
        }

        if (count < minFreq) {
            // Found an element with frequency maximum among
            // all elements found till now
            minElement = element;
            minFreq = count;
        }
        else if(count == minFreq) {
            // Checking if the current element is smaller or not
            minElement = min(minElement, element);
        }
    }

    vector<int> ans = {maxElement, minElement};
    return ans;
}
*/