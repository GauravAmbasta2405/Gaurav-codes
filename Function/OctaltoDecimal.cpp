#include<iostream>
using namespace std;
int OctaltoDecimal(int n)
{
	int ans=0;
	int x=1;
	while(n>0)
	{
		int y=n%10;
		ans+=x*y;
		x*=8;
		n/=10
	}
	return ans;
}
int main()
{
	int ;
	cout<<"Enter number: ";
	cin>>n;
	cout<<OctaltoDecimal(n)<<endl;
	return 0;
}