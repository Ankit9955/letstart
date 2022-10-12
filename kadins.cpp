// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

	int getmaxsubarraysum(int arr[],int size)
	{
		int sum=0;
		int ans=INT_MIN;
		for(int i=0;i<size;i++)
		{
			sum=sum+arr[i];
			ans=max(ans,sum);
			if(sum<0)
			{
				sum=0;
			}
		}
		return ans;
	}
int main() {
int arr[]={1 ,2 ,7, -4, 3, 2 ,-10 ,9 ,1};
cout<<"Maximum subarray sum is "<< getmaxsubarraysum(arr,7);
    return 0;
}
