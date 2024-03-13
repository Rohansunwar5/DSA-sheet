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

void print(Node *head)
{
  while (head != NULL)
  {
    cout << head->data << " ";
    head = head->next;
  }
}

Node *deleteFirst(Node *head)
{
  if (head == NULL || head->next == NULL)
  {
    return NULL;
  }
  Node *prev = head;

  head = head->next;
  head->back = nullptr;
  prev->next = nullptr;

  delete (prev);

  return head;
}

Node *deleteLast(Node *head)
{
  if (head == NULL || head->next == NULL)
  {
    return NULL;
  }

  Node *tail = head;
  while (tail->next != NULL)
  {
    tail = tail->next;
  }
  Node *prev = tail->back;
  prev->next = nullptr;
  tail->back = nullptr;
  delete tail;

  return head;
}

Node *removeKthElement(Node *head, int k)
{
  if (head == NULL)
    return NULL;

  int count = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    count++;
    if (count == k)
      break;
    temp = temp->next;
  }
  Node *prev = temp->back;
  Node *front = temp->next;

  if (prev == NULL && front == NULL)
  {
    return NULL;
  }
  else if (prev == NULL)
  {
    Node *first = head;
    head = head->next;
    head->back = nullptr;
    first->next = nullptr;

    delete (first);
    return head;
  }
  else if (front == NULL)
  {
    Node *tail = head;
    while (tail->next != NULL)
    {
      tail = tail->next;
    }
    Node *prev = tail->back;
    prev->next = nullptr;
    tail->back = nullptr;
    delete tail;

    return head;
  }

  prev->next = front;
  front->back = prev;

  temp->next = nullptr;
  temp->back = nullptr;
  delete (temp);
  return head;
}

void deleteNode(Node *temp)
{
  Node *prev = temp->back;
  Node *front = temp->next;

  if (front == NULL)
  {
    prev->next = nullptr;
    temp->back = nullptr;
    free(temp);
    return;
  }
  prev->next = front;
  front->back = prev;

  temp->next = temp->back = nullptr;
  free(temp);
}

int main()
{
  vector<int> arr = {12, 3, 4, 1};
  Node *head = convertArr2DLL(arr);
  // Node *newHead = removeKthElement(head, 4);
  deleteNode(head->next);
  print(head);
  return 0;
}