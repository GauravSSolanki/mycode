#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<map>
#include<algorithm>
using namespace std;
/* void display1(map<string,int > &mp)
{
    map<string,int> :: iterator it;
    for (auto it = mp.begin(); it!=mp.end(); it++)
    {
       cout<<(*it).first<<" "<<(*it).second<<endl;
    }
} */
void display2(unordered_map<string,int> &mp)
{
    unordered_map<string,int> :: iterator it;
    for (auto it = mp.begin(); it!=mp.end(); it++)
    {
       cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    cout<<" size of Umap "<<mp.size()<<endl;
}
int main()
{
   /*  map<string,int> m;
    map<int ,string> mp;
    int n; 
    cin>>n;
    for (int i = 0; i<n; i++)
    {
        string s; 
        cin>>s;
        m[s]=i;
        // m[s]++;
    }
    m.insert({"uok",1});
    display1(m); */

    /* mp[1]="abc";
    mp[3]="bcd";
    mp[2]="deb";
    mp[8]="xyz";
    mp.insert({5,"fgh"});
    for(auto &ele :mp)
    {
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    cout<<mp.size()<<endl;
    display(mp);
    cout<<mp.size()<<endl;
    for(auto &ele :m)
    {
        cout<<ele.first<<" "<<ele.second<<endl;
    } */

    unordered_map<string,int> m;
    int n; 
    cin>>n;
    for (int i = 0; i<n; i++)
    {
        string s; 
        cin>>s;
        m[s]=i;
    }
    m.insert({"uok",1});
    display2(m);
}