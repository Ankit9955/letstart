#include <iostream>
using namespace std;

void swapalternate(int arr[],int size)
{
	int i=0;
	int j=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]<0)
		{
			swap(arr[i],arr[j]);
			j++;
		}
	}
}
int main(){

int arr[7]={3,-1,2,-4.-6,-4,5};
   swapalternate(arr,7);
   //print array
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
