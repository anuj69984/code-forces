#include <iostream>
using namespace std;

void print(char A[], int length){
	for (int l = 0; l < length; l=l+5)
	{
		if(A[l]=='o' && A[l+1]=='o'){
			cout<<"YES\n";
			A[l]='+';
			A[l+1]='+';
			return;
		}
		else if(A[l+3]=='o' && A[l+4]=='o'){
			cout<<"YES\n";
			A[l+3]='+';
			A[l+4]='+';
			return;
		}
		l=l+5;		
	}
	cout<<"NO";	
} 

void printfinal(char A[], int length){
	int j=0,k=1;
	for (int i = 0; i < length; i++)
	{
		cout<<A[i]<<" ";
		j++;
		if(j==5*k){
			cout<<"\n";
			k++;
		}
	}
}

int main(int argc, char const *argv[])
{
	int T,n;
		cout<<"no of rows : ";
		cin>>n;
		char A[5*n];
		int l=0;
		cout<<"Enter data in rows : \n";
		for (int j = 0; j <n ; ++j)
		{
			for (int k = 0; k < 5; ++k)
			{
				cin>>A[l];
				l++;
			}
		}
	print(A,l);
	printfinal(A,l);
	return 0;
}