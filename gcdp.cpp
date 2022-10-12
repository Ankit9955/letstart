#include <iostream>
using namespace std;

int main() {
int a=10;
int b=15;
while(a!=b)
{
	if(a>b)
	{
		a=a-b;
	}
	else
	b=b-a;
}

cout<<a<<endl;
    return 0;
}
