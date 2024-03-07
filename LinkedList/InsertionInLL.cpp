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

Node *insertHead(Node *head, int val)
{
  // Node* temp = Node(val, head) same
  Node *temp = new Node(val);
  temp->next = head;
  return temp;
}

Node *insertTail(Node *head, int val)
{
  if (head == NULL)
    return new Node(val);
  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  Node *newNode = new Node(val);
  temp->next = newNode;
  return head;
}

Node *insertKth(Node *head, int val, int k)
{
  if (head == NULL)
  {
    if (k == 1)
      return new Node(val);
    else
      return head;
  }
  if (k == 1)
  {
    Node *newHead = new Node(val, head);
    return newHead;
  }
  int cnt = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    cnt++;
    if (cnt == (k - 1))
    {
      Node *x = new Node(val, temp->next);
      temp->next = x;
      break;
    }
    temp = temp->next;
  }
  return head;
}
Node *insertBeforeValue(Node *head, int el, int val)
{
  if (head == NULL)
  {
    return NULL;
  }
  if (head->data == val)
  {
    Node *newHead = new Node(el, head);
    return newHead;
  }

  Node *temp = head;
  while (temp->next != NULL)
  {

    if (temp->next->data == val)
    {
      Node *x = new Node(el, temp->next); // the value temp was pointing to is being taken by x,
      temp->next = x;
      break;
    }
    temp = temp->next;
  }
  return head;
}

int main()
{
  vector<int> arr = {12, 5, 8, 7};
  Node *head = convertArr2LL(arr);
  head = insertBeforeValue(head, 100, 8);

  while (head != NULL) // not equal to null
  {
    cout << head->data << " ";
    head = head->next;
  }
}