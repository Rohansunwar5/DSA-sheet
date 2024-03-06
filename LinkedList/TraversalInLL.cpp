#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
  int data;
  Node *next;

public:
  Node(int data1, Node *next1)
  {
    data = data1;
    next = next1;
  }

public:
  Node(int data1)
  {
    data = data1;
    next = nullptr;
  }
};

Node *convertArr2LL(vector<int> arr)
{
  Node *head = new Node(arr[0]);
  Node *mover = head;

  for (int i = 1; i < arr.size(); i++)
  {
    Node *temp = new Node(arr[i]);
    mover->next = temp; // the mover takes the place of temp
    mover = temp;
  }
  return head;
}

int main()
{
  vector<int> arr = {12, 5, 8, 7};
  Node *head = convertArr2LL(arr);
  Node *temp = head;
  while (temp) // not equal to null
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}