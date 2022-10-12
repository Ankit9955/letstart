#include<iostream>
using namespace std;

int expo (int n)
{
	//base case
	if(n==0)
	{
		return 1;
	}
	//recursive relation
	int smaller=expo(n/2);
	
	if(n&1)
	{
		return smaller*smaller*2;
	}
	else
	{
		return smaller*smaller;
	}
}



int main()
{
	int n;
	cout<<"Enter n "<<endl;
	cin>>n;
cout<<"Answer "<<expo(n);
	return 0;
}
