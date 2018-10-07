#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter n : ";
	cin>>n;
	int A[n][n];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(i==0 || j==0){
				A[i][j]=1;
				cout<<A[i][j]<<" ";
				
			}
			else{
				A[i][j]=A[i-1][j]+A[i][j-1];
				cout<<A[i][j]<<" ";
			}

		}
	} 
	cout<<"maximum is : "<<A[n-1][n-1]<<endl;
	return 0;
}