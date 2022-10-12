#include <iostream>
using namespace std;
void reversearr(int arr[],int size)
{
    int i=0;
    int j=size-1;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
    int getmaxi(int arr[],int size)
    {
    	int ans=INT_MIN;
    	for(int i=0;i<size;i++)
    	{
    		ans=max(ans,arr[i]);
		}
		return ans;
	}
	 int getmini(int arr[],int size)
    {
    	int ans=INT_MAX;
    	for(int i=0;i<size;i++)
    	{
    		ans=min(ans,arr[i]);
		}
		return ans;
	}
	void swapalternate(int arr[],int size)
	{
		int i=0;
		while(i<size)
		{
			if(i+1<size)
			{
				swap(arr[i],arr[i+1]);
				i=i+2;
			}
		}
	}
int main() {
int arr[6]={2,7,5,6,9,8};
reversearr(arr,6);
    //print array
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   int ans=getmaxi(arr,6);
   cout<<ans<<endl;
   cout<<getmini(arr,6);
   cout<<endl;
   swapalternate(arr,6);
   //print array
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
