#include <iostream>
using namespace std;

void selectionsort(int arr[],int n)
{
    for(int i = 0; i < n-1; i++ ) {
        int minIndex = i;
        
        for(int j = i+1; j<n; j++) {
            
            if( arr[minIndex]>arr[j]) 
                minIndex = j;
            
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main(){

int arr[4]={7,5,4,2};
selectionsort(arr,4);
for(int i=0;i<4;i++)
    {
    	cout<<arr[i]<<" ";
	}
    return 0;	
	
	}
