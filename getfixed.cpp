#include <iostream>
using namespace std;
// FIND FIX POINT IN SORTED ARRAY VALUE =INDEX 
int getfixedpoint(int arr[],int n)
{
	int start=0;
	int end=n-1;
	while(start<=end)
	{
		int mid=(start+end)/2;
		if(arr[mid]==mid){
			return mid;
		}
		else if(arr[mid]>mid)
		{
			end=mid-1;
		}
		else
		{
			start=mid+1;
		}
    }
    return -1;
}
  

int main(){

int arr[]={-10,-5,0,3,7};
int n=5;
cout<<getfixedpoint(arr, n);

  return 0;
}
