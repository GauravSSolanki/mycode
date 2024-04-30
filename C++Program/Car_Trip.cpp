#include<iostream>
using namespace std;
void swap(int arr[] ,int i,int j)
{
     int t=arr[i];
     arr[i]=arr[j];
     arr[j]=t;
}
void DNF(int arr[] ,int n)
{
  int low=0;
  int high=n-1;
  int mid=0;
  while(mid<=high)
  {
    if(arr[mid]==0)
      {
        swap(arr,low,mid);
        mid++;
        low++;
      }
      else if( arr[mid]==1)
      {
        mid++;
      }
      else{
        swap(arr,mid,high);
        high--;
      }
  }
}
int main()
{
 int arr[8]={1,2,0,2,1,1,2,0};
   DNF(arr,8);
   for(int i=0;i<8;i++)
   {
    cout<<arr[i]<<" ";
   }
}