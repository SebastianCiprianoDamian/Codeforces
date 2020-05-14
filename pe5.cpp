#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int a=(100*101)/2;
	a=pow(a,2);
	long long int sum=0;
	for(int i=1; i<=100;i++){
		sum+=pow(i,2);
	}
	
	cout<<abs(a-sum)<<endl;
	
	
	return 0;
}
