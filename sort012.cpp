#include <iostream>
using namespace std;
 bool palindrome(int arr[],int size)
	{
		int i=0;
		int j=size-1;
		while(i<j)
		{
			if (arr[i]==arr[j])
			{
				i++;
				j--;
			}
			else
			{
				return false;
			}
		}
		return true;
		
		
	}


int main() {
int arr[7]={1,2,3,3,2,1};
cout<<"Cheak palindrome or not"<< palindrome(arr, 6);
    return 0;
}
