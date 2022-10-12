#include<iostream>
using namespace std;
void transpose(int arr[3][3],int row,int colon)
{
	for(int i=0;i<row;i++)
	{
		//half triangle so j<i;
		for(int j=0;j<i;j++)
		{
		  swap(arr[i][j],arr[j][i]);
		}
}
}
void reverseCol(int arr[3][3], int m , int n)
{
    for(int i=0; i<m; i++)
    {
    int start=0;
    int end= n-1;

    while(start<end)
    {
        swap(arr[i][start], arr[i][end]);
        start++;
        end--;
    }
}
}
int main()
{
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	transpose(arr,3,3);
	reverseCol(arr,3,3);
	// print 
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		 cout<<arr[i][j]<<" ";
		}
		cout<<endl;
}
	
}
