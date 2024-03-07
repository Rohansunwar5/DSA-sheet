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

Node *removeHead(Node *head)
{
  if (head == NULL)
    return head;
  Node *temp = head;
  head = head->next;
  delete temp;
  return head;
}

Node *removeTail(Node *head)
{
  // for LL with one ele -> delete  it and return NULL
  if (head == NULL || head->next == NULL)
    return NULL;
  Node *temp = head;

  while (temp->next->next != NULL) // cheking if last second element is pointing to the null or not
  {
    temp = temp->next;
  }
  // Once the loop breaks, the temp will be pointing at the second last elemt
  free(temp->next);
  temp->next = nullptr;

  return head;
}

Node *removeK(Node *head, int k)
{
  if (head == NULL)
    return NULL;
  if (k == 1)
  {
    Node *temp = head;
    head = head->next;
    free(temp);
    return head;
  }

  int cnt = 0;
  Node *prev = NULL;
  Node *temp = head;

  while (temp != NULL)
  {
    cnt++;
    if (cnt == k)
    {
      prev->next = prev->next->next;
      free(temp);
      break;
    }
    prev = temp;
    temp = temp->next;
  }
  return head;
}
Node *removeValue(Node *head, int el)
{
  if (head == NULL)
    return NULL;
  if (head->data == el)
  {
    Node *temp = head;
    head = head->next;
    free(temp);
    return head;
  }

  Node *prev = NULL;
  Node *temp = head;

  while (temp != NULL)
  {

    if (temp->data == el)
    {
      prev->next = prev->next->next;
      free(temp);
      break;
    }
    prev = temp;
    temp = temp->next;
  }
  return head;
}

int main()
{
  vector<int> arr = {12, 5, 8, 7};
  Node *head = convertArr2LL(arr);
  head = removeK(head, 4);

  while (head != NULL) // not equal to null
  {
    cout << head->data << " ";
    head = head->next;
  }
}