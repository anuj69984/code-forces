#include <iostream>
using namespace std;

int mini(int a,int b, int c, int d){
	if(a <=b && a<=c && a<=d) return a;
	else if(b <=a && b<=c && b<=d) return b;
	else if(c <=b && c<=a && c<=d) return c;
	else if(d <=b && d<=c && d<=a) return d;
}
int min(int d1,int d2,int d3){
	int a1=2*(d1+d2);
	int a2=2*(d1+d3);
	int a3=2*(d3+d2);
	int a4=(d1+d2+d3);
	return mini(a1,a2,a3,a4);
}
int main(int argc, char const *argv[])
{
	int d1,d2,d3;
	cout<<"enter d1,d2,d3 : ";
	cin>>d1;
	cin>>d2;
	cin>>d3;
	cout<<"minimum distance is : "<<min(d1,d2,d3)<<endl;
	return 0;
}