#include<iostream>
using namespace std;

void print(int n)
{
	//base case
	if(n<1)
	{
		return;
	}
	print(n-1);
	cout<<n<<endl;
}



int main()
{
	int n;
	cout<<"Enter n "<<endl;
	cin>>n;
	print(n);
	return 0;
}
