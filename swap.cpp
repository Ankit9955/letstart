// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

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
int arr[]={3,5,2,7,6,9}
int swapalternate(arr,6)
//print array
for(int i=0;i<6;i++)
{
    cout<<arr[i];
}
}
    return 0;
}
