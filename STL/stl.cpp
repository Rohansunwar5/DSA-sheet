#include <bits/stdc++.h>
using namespace std;

// Pairs

void explainPair()
{
  pair<int, int> p1 = {1, 3};
  cout << p1.first << " " << p1.second << endl;

  pair<int, pair<int, int>> p2 = {1, {3, 4}};
  cout << " " << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

  pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
  cout << " " << arr[1].second << endl;
}

void explainVector()
{
  vector<int> v1;     // creates an empty container
  v1.push_back(1);    // pushes the number to the declared vector
  v1.emplace_back(2); // dynamically inserts the element in the v1, increasing the size, this is faster then [push_back]

  // vector<pair<int, int>> v2; // pair container declaration
  // v2.push_back({
  //     1,
  //     2,
  // });
  // v2.emplace_back(3, 4);

  // vector<int> v3(5, 100); // creates five instances of 100 [100,100,100,100,100]

  // vector<int> v4(5); // creates 5 instances of 0 or garbage value depending on the compiler

  // vector<int> v5(v3); // copies the v3 instances intp v5

  // vector<int> v6(5, 6, 3, 2, 4, 6);

  // vector<int>::iterator it = v3.begin();

  // // it++;
  // // cout << *(it) << " ";

  // // cout << v2.back() << " "; // element at the last pos

  // // looping around  vectors

  // for (auto it = v6.begin(); it != end(); it++)
  // {
  //   cout << *(it) << " ";
  // }
  vector<pair<int, int>> vec;

  vec.emplace_back(1, 2);
  vec.emplace_back(3, 4);
  vec.emplace_back(5, 6);

  for (const auto &p : vec)
  {
    cout << p.first << " " << p.second << endl;
  }
  for (auto &it : vec)
  {
    cout << it << " ";
  }

  // {10,20,30,40}
  vec.erase(vec.begin() + 1); // {10,30,40}

  //{10,20,30,40,50,60}

  vec.erase(vec.begin() + 2, v.begin() + 4);
  {10, 20, 60};

  // insert functions

  vector<int> vec2(2, 100)               // 100,100;
      vec2.inser(vec2.begin() + 1, 300); // 100,300,100;
  vec2.insert(vec2.begin() + 1, 2, 10);  // 100,10,10,300,100

  vector<int> copy(2, 50);                             // 50,50
  vec2.insert(vec2.begin(), copy.begin(), copy.end()); // 50,50,100,10,10,100,100

  cout << v.size(); // returns the size

  v.pop_back(); // pops out the last element
  // v1 => {10,20}
  // v2 => {30,40}
  v1.swap(v2); // v1=> 30,40 v2=> 10,20

  v1.clear(); // erases the entire vector;
}

void explainList()
{
  list<int> ls;
  ls.push_back(2);    // 2
  ls.emplace_back(4); // 2,4
  ls.push_front(5);   // 5,2,4

  ls.emplace_front();
  {
    2, 4
  }

  // rest functions same as vector
  // begin, end, begin, rend, clear, insert, size, swap
}

void explainStack()
{
  // LIFO => last in forst out

  stack<int> st;
  st.push(1);    // 1
  st.push(2);    // 2,1
  st.push(3);    // 3,2,1
  st.push(4);    // 4,3,2,1
  st.emplace(5); // 5,4,3,2,1

  cout << st.top(); // prints 5 (st[2] is invalid);
  st.pop();

  cout << st.top();   // 4
  cout << st.size();  // 3
  cout << st.empty(); // false

  stack<int> st1, st2;
  st1.swap(st2);
}
void explainQueue()
{
  // FIFO => First in first out

  queue<int> sq;
  sq.push(1);    // 1
  sq.push(2);    // 1,2
  sq.push(3);    // 1,2,3
  sq.push(4);    // 1,2,3,4
  sq.emplace(5); // 1,2,3,4,5

  sq.back() += 5 // adding to 5 i.e 1,2,3,4,10

               cout
               << sq.back(); // prints 10
  cout << sq.front();        // prints 1 => first element that got in
  sq.pop();                  // 2,3,4,10
  cout << sq.front();        // print
}
void explainPQ()
{
  // max heap
  priority_queue<int> pq;

  pq.push(5);     // 5
  pq.push(2);     // 5,2
  pq.push(8);     // 8, 5,2
  pq.emplace(10); // 10,8,5,2

  cout << pq.top(); // prints 10

  pq.pop(); // 8 5 2

  cout << pq.top(); // print 8

  // minimim heap
  priority_queue<int, vector<int>, greater<int>> pq;
  pq.push(5);     // 5
  pq.push(2);     // 2 5
  pq.push(8);     // 2 5 8
  pq.emplace(10); // 2 5 8 10

  cout << pq.top();
}

void explainSet()
{
  set<int> st;
  st.insert(1);  // 1
  st.emplace(2); // 1, 2
  st.insert(2);  // 1,2
  st.insert(4);  // 1,2,4
  st.insert(3);  // 1,2,3,4

  // set stores in sorted order and unique values

  auto it = st.find(3); // returns an itreator which points to 3
  auto it = st.find(6); // if element is not in the set it returns set.end();
  st.erase(5);          // removes

  int cnt = st.count(1);

  // 1,2,3,4,5
  auto it1 = st.find(2);
  auto it2 = st.find(4);
  st.erase(it1, it2) // after erase {1,4,5} {first, last}

      // lower bound and upperbound() function wokrs in the same way as in vector it does

      auto it = st.lower_bound(2);
  auto it = st.upper_bound(2);
}

void explainMutliSet()
{
  // stores in sorted manner but the difference is it can also store multi values
  multiset<int> mts;
  mts.insert(1); // [1]
  mts.insert(1); // [1, 1]
  mts.insert(2); // [1, 1, 2]
  *mts.begin();  // 1 (smallest element)
  *--mts.end();  // 2 (largest element)
  mts.erase(1);  // all 1's erased

  int cnt = mts.count(1);

  // only a single one erased
  mts.erase(mts.find(1));

  mts.erase(mts.find(1), mts.find(1) + 2);

  // rest all functions same as set
}

void explainSet()
{
  unordered_set<int> st;
  // o(1);
}

void explainMap()
{
  // keys are unique even if a value is dublicate
  //{key,value} pair key, can be of any data type
  // everything is stored in sorted order
  map<int, int> mp;
  map<int, pair<int, int>> mp;
  map<pair<int, int>, int> mp;

  mp[1] = 2;
  mp.emplace({3, 1});
  mp.insert({2, 4});

  mp({2, 3}) = 10;

  for (auto it : mp)
  {
    cout << it.first << " " << it.second << endl;
  }
  cout << map[1];

  auto it = mp.find(3);
  cout << *(it).second; // *(it) => gives out (keyvalue) pair and .second give out the value of the key

  auto it = mp.lower_bound(2);
  auto it = mp.upper_bound(2);
}

void explainMultiMap()
{
  // can store dublicate keys, sorted
}

void explainUNorderedMap()
{
  // O(1);
}

int main()
{

  // explainPair();
  // explainVector();
  explainStack();
  return 0;
}