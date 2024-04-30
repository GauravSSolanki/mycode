#include<iostream>
#include<algorithm>
#include<string>
using namespace std ;
int main()
{ 
 string s1="fam";
 string s2="ily";
 string s3 ;
 string s4 ="s4 nincompoop";
 string s5 ="780";
 int x=50  ;
 
 string s6 ="hi gaurav" ;
 sort(s6.begin(),s6.end()) ;
 cout<< s6 << endl;
 
 cout<<x+2 <<endl;
 
  s4.erase(6,3);
  cout<<s4<<endl; 
  cout<< s4.find("poop")<<endl;
  cout<<s4.insert(2,"LOL")<<endl;
  cout<<" length of string s2 is ;"<<s2.length()<<endl;
  
 cout<<"enter string s3 :  ";
 getline(cin ,s3) ; // this function is used to get space as it is . cin works as space saperated 
  cout<<s3<<endl; 
  if(!s3.empty())
  {
  	cout<<"string s3 is not empty "<<endl;
  }
 
cout<<s1+s2<<endl ;
cout<<s1[1] <<endl;
   
s1= s1.append(s2) ;
cout<<s1<<endl ;
   
   cout<<s2.append(s1)<<endl;
   s2.clear();
   if(s2.empty())
  {
  
   cout<<"string s2 is empty clear function is applied"<<endl;
  } 
   return 0;
}
