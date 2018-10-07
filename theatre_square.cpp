#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m,a;
	cin>>n;
	cin>>m;
	cout<<"enter side of sqaure: ";
	cin>>a;

	int ans=((m+a-1)/a)*((n+a-1)/a);
	cout<<ans<<endl;
	return 0;
}