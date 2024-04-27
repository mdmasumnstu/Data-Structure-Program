#include<iostream>
using namespace std;

int ackemman(int m,int n)
{
	if(m==0)
	{
		return n+1;
	}
	
	else if(m!=0 && n==0)
	{
	   return ackemman(m-1,1);	
	}
	
	else if(m!=0 && n!=0)
	{
		return ackemman(m-1,ackemman(m,n-1));
	}
}

int main()
{
	int a,b;
	cout<<"Enter the two value: "<<endl;
	cin>>a>>b;
	int result;
	result=ackemman(a,b);
	cout<<result;
}
