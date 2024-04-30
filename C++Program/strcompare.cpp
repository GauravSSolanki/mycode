#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
  int t;
  cin>>t;
  for(int i=1;i<=t;i++)
  {
    string s1;
    cin>>s1;
    cout<<s1<<endl;
    string s2;
    cin>>s2;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2)
    {
      cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }
    
    
  }
  
  return 0;
}

// test case 
// 2
// hello
// heole
// prime
// rimpe
// output:
// no
// yes
