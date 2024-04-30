#include <iostream>
using namespace std;
int main()
{
int myNumbers[5] = {10, 20, 30, 40, 50} , c=0;
for (int i : myNumbers) {
  cout << i << "\n";
  c++;
  }
  cout<<c;
}