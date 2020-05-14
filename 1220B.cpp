#include <bits/stdc++.h>

using namespace std;
int main()
{
	int n,a;
	cin>>n;
	long long int array[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>array[i][j];
		a=array[0][1]*array[0][2]/array[1][2];
		a=sqrt(a);
		cout<<a<<" ";
		for(int k=1;k<n;k++)
			cout<<array[k][0]/a<<" ";
			cout<<endl;
		return 0;
}
