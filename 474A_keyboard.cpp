#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string s="qwertyuiopasdfghjkl;zxcvbnm,./";
	string text;
	char shift;
	cout<<"enter 'R' for right shift or 'L' for left : ";
	cin>>shift;
	cout<<"Enter the text : ";
	cin>>text;
	int length=text.size();
	cout<<"size : "<<length<<endl;
	for (int i = 0; i < length; ++i)
	{
		cout<<s[s.find(text[i])-(shift=='R')+(shift=='L')];
		
	}
	cout<<endl;
	return 0;
}