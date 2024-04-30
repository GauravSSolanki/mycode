#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
class node
{
  int data;
  node *next;
  node(int val)
  {
    data = val;
    next = NULL;
  }
};


void display(list<int> lst)
{
  while (!lst.empty())
  {
    cout << lst.front() << " ";
    lst.pop_front();
  }
  cout << endl;
}
void swap(int *a, int *b)
{
  int *tmp;
  tmp = a;
  a = b;
  b = tmp;
}
int main()
{
  vector<int> arr = {73, 22, 41, 13, 0, 12, 5};
  int idx = arr.size() - 1;
  // arr.push_back
  sort(arr.begin(), arr.end()); // sort a array
  for (int i = 0; i <= idx; i++)
  {
    cout << arr[i] << " ";
  }

  for (int i = 0; i <= idx / 2; i++) // reverse a array
  {
    swap(arr[i], arr[idx - i]);
  }
  for (int i = 0; i <= idx; i++) // print a array
  {
    cout << arr[i] << " ";
  }

  int max = arr[0]; // print max element
  for (int i = 1; i <= idx; i++)
  {
    if (max <= arr[i])
    {
      max = arr[i];
    }
  }
  cout << max << " ";

  list<int> lst;
  lst.push_back(2);
  lst.push_back(4);
  lst.push_back(3);
  lst.push_back(6);
  display(lst);
  lst.sort();
  lst.emplace_front(9);
  display(lst);
  cout << "size of list" << lst.size();
}