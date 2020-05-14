#include<bits/stdc++.h>

using namespace std;

int main(){
	long long int l,r;
	cin>>l>>r;
	int resta=(r-l+1)/2;
	cout<<"YES"<<endl;
	for(int i=0;i<resta;i++){
		
		cout<<l+i+i<<" "<<l+i+i+1<<endl;
	}
	return 0;
}
