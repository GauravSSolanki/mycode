#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    for (int i = 1; i < 6; i++)
    {
        v.push_back(i*21);
    }
    
    pair<int ,string> p1 ;
    cout<<p1.first<<" "<<p1.second; 

    pair<int ,string> p2{23 ,"singh"} ;
    p2.swap(p1);
    cout<<p1.first<<" "<<p1.second; 

    pair<int ,string> p3 ;
    p3={7,"solanki"};
    cout<<p3.first<<" "<<p3.second; 

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    v.resize(6);
    cout<<v.empty()<<endl;
    v.shrink_to_fit();
    cout<<v.capacity()<<endl;

    for (auto it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }cout<<endl;
    
    for (auto el : v)
    {
      cout<<el<<" ";
    }cout<<endl;
   
   
    v.shrink_to_fit();
    for (auto it=v.rbegin(); it!=v.rend(); it++)
    {
        cout<<*it<<" ";
    }cout<<endl;

    sort(v.rbegin(),v.rend());
    for (auto it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }cout<<endl;
}