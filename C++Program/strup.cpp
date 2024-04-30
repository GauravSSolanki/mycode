#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string str ;
    getline(cin,str);
    for (int i = 0; i < str.length(); i++)
    {  
        if(str[i]>='a' && str[i]<='z')
           {
             str[i]-=32;
           }
    }   
     cout<<str<<endl;

      for (int i = 0; i < str.length(); i++)
 {  
     if(str[i]>='A' && str[i]<='Z')
        {
          str[i]+=32;
        }
 }   
  cout<<str<<endl;
   string s1="ashbABH113"; //using STL string algo
   transform( s1.begin(),s1.end(),s1.begin(), ::toupper);
   cout<<s1<<endl;
   string s2="FIYTFITF";
    transform( s2.begin(),s2.end(),s2.begin(), ::tolower);
    cout<<s2<<endl; 
      
} 
