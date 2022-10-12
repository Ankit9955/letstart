#include<iostream>
#include<vector>
using namespace std;

int getcount(int n){
//sare ko prime man liye
vector<bool> v(n+1,true);
int cnt=0;
//mark 0 and ko non prime
v[0]=v[1]=false;

for(int i=2;i<n;i++)
{
	if(v[i]==true){
   	cnt++;
   	cout<<i<<" ";
	}
	//table
	for(int j=2*i;j<n;j=j+i)
	{
		v[j]=false;
	}
}
cout<<endl;
return cnt;
}



int main(){
int n=30;
cout<<"Prime total count "<<getcount(n);
return 0;
}
