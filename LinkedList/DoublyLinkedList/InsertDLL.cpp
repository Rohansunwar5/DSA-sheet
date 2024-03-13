#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
  int data;
  Node *next;
  Node *back;

public:
  Node(int data1, Node *next1, Node *back1)
  {
    data = data1;
    next = next1;
    back = back1;
  }

public:
  Node(int data1)
  {
    data = data1;
    next = nullptr;
    back = nullptr;
  }
};

void print(Node *head)
{
  while (head != NULL)
  {
    cout << head->data << " ";
    head = head->next;
  }
}

Node *convertArr2DLL(vector<int> &arr)
{
  Node *head = new Node(arr[0]); // next and prev  are set to NULL by default from constuctor
  Node *prev = head;
  for (int i = 1; i < arr.size(); i++)
  {
    Node *temp = new Node(arr[i], nullptr, prev);
    prev->next = temp;
    prev = prev->next;
  }
  return head;
}

Node *insertBeforeHead(Node *head, int val)
{
  Node *newHead = new Node(val, head, nullptr);
  head->back = newHead;

  return newHead;
}
Node *insertBeforeTail(Node *head, int val)
{
  if (head->next == NULL)
  {
    return insertBeforeHead(head, val);
  }
  Node *tail = head;
  while (tail->next != NULL)
  {
    tail = tail->next;
  }

  Node *prev = tail->back;
  Node *newNode = new Node(val, tail, prev);
  prev->next = newNode;
  tail->back = newNode;

  return head;
}

Node *insertAtKthIndex(Node *head, int val, int k)
{
  if (k == 1)
  {
    return insertBeforeHead(head, val);
  }
  int cnt = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    cnt++;
    if (cnt == k)
      break;
    temp = temp->next;
  }
  Node *prev = temp->back;
  Node *newNode = new Node(val, temp, prev);
  prev->next = newNode;
  temp->back = newNode;

  return head;
}

void insertBeforeNode(Node *node, int val)
{
  Node *prev = node->back;
  Node *newNode = new Node(val, node, prev);
  prev->next = newNode;
  node->back = newNode;
}

int main()
{
  vector<int> arr = {12, 3, 4, 1};
  Node *head = convertArr2DLL(arr);
  // head = insertBeforeHead(head, 19);
  // head = insertBeforeTail(head, 22);
  // head = insertAtKthIndex(head, 43, 3);
  insertBeforeNode(head->next->next, 12343);
  print(head);
  return 0;
}