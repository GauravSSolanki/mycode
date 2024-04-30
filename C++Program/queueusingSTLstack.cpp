#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
// not recommonded for rivision
class que{
    stack<int> s1;
    stack<int> s2;
    public :
    void pushh(int e)
    {
        s1.push(e);
    }
    int popp(){
        while (!s1.empty())
        {
            s2.push(s1.top());
            cout<<s1.top()<<" ";
            s1.pop();
        }
        cout<<endl;
        int k=s2.top();
        s2.pop();
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        cout<<k<<endl ;
    }
};
int main()
{ que q ;
 q.pushh(2);
 q.pushh(6);
 q.pushh(5);
 q.pushh(4);
 q.popp();
 q.pushh(3);
 q.popp();
 q.pushh(0);
 q.popp();

  
  return 0;
}