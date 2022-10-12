#include <iostream>
using namespace std;

int power(int a,int b){
int res=1;
while(b>0)//power =b
{
	//odd
	if(b&1)
	{
		res=res*a;//a is value 
	}
	a=a*a;
	b=b>>1;  //b/2 bhi ho jayega 
}
return res;
}

int main() {
int a=2;
int b=4;
cout<<power(a,b)<<endl;
    return 0;
}
//time complexity is (ologb)


/*
//brute froce
int ans=1;
for(int i=0;i<b;i++)
{
ans=ans*a;

}
return ans;
*/
//time complexity is o(b)
