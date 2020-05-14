#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	cin>>n;
	string s;
	while(n--){
		cin>>k;
		cin>>s;
		if(k==2){
			if(s[0]-'0'<s[1]-'0')
			{
				cout<<"YES"<<endl;
				cout<<2<<endl;
				cout<<s[0]<<" "<<s[1]<<endl;
			}
			else cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
			cout<<2<<endl;
			cout<<s[0]<<" ";
			for(int i=1; i<k ; i++)
			    cout<<s[i];
			cout<<endl;
		}	
		
	}
	
	return 0;
}
