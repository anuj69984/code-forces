#include <iostream>
using namespace std;

void winner(int n){

}

int main(int argc, char const *argv[])
{
	int n;
	cout<<"enter number of rounds : ";
	cin>>n;
	int first,second,l1=0,l2=0;
	for (int i = 1; i <= n; ++i)
	{
		cout<<"*********************"<<endl;
		cout<<"Round : "<<i<<endl;
		cout<<"Enter first output : ";
		cin>>first;
		cout<<"Enter second output : ";
		cin>>second;
		if(first > second)
			l1++;
		else if(second > first)
			l2++;
	}
	if(l1 > l2) cout<<"Mishka\n";
	else if(l2 > l1) cout<<"Chris\n";
	else
		cout<<"Friendship is magic!^^\n";
	return 0;
}