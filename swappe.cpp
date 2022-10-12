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
void reverse(int arr[],int size)
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
int main(){

int arr[6]={2,7,5,6,9,8};
   swapalternate(arr,6);
   //print array
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverse(arr,6);
    //reverse array
    for(int i=0;i<6;i++)
    {
    	cout<<arr[i]<<" ";
	}
    cout<<endl;
    return 0;
}
