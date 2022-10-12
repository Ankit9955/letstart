#include<iostream>
using namespace std;

int pow (int n)
{
	//base case
	if(n==0)
	{
		return 1;
	}
	//recursive relation
return 2*pow(n-1);
}


int main()
{
	int n;
	cout<<"Enter n "<<endl;
	cin>>n;
cout<<"Answer "<<pow(n);
	return 0;
}
