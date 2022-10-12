#include<iostream>
using namespace std;

int factorial(int n)
{
	//base case
	if(n==1)
	{
		return 1;
	}
	return n*factorial(n-1);
}



int main()
{
	int n;
	cout<<"Enter n "<<endl;
	cin>>n;
	cout<<"Factorial "<<factorial(n);
	return 0;
}
