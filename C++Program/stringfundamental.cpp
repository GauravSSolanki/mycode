#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    string str1(2,'s');
    getline(cin,str);
    cout<<str<<endl;
    cout<<str1<<endl;
    for (int i = 0; i < str.length(); i++)
    {
        cout<<str[i]<<endl;
    }
    //str.append(str1);
    //is.empty(str);
    //str.clear();
    //str.length();
    // str.compare(str1);
    // str.erase(i,count);
    // str.find("let")
    // str.insert(i,"lol");
    // str.substr(i,count);
    // string s="123"//  stoi(s) ;
    
    string s="123";
    int x=2;
    cout<< x + stoi(s)<<endl;
 cout<< to_string(x)+s<<endl;
 cout<< to_string(x)+"abc"<<endl;

     sort(str.begin() , str.end());
     cout<<str<<endl;
}