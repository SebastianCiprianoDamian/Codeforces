#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string ss;
	bool flag;
	int sum=0;
	vector<string> v;
	string dat;
	int n,m;
	cin>>n>>m;
	for(int i=0; i<n ; i++){
		cin>>dat;
		v.push_back(dat);
	}
	
	for(int i=0; i<n-1 ;i++){
		for(int j=i+1; j<n ;j++){
			int l=0;
			flag=true;
			while(flag==true && l<m){
				if(v[i][l]!=v[j][m-1-l]){
					flag=false;
				}
				l++;
			}
			if(flag==true){
				ss+=v[i];
				sum+=2*m;
				v[i]="0";
				v[j]="0";
			}
		}
	}
	string med;
	for(int i=0; i<n ; i++){
		int a=0,b=m-1;
		bool flag2=true;
		while(flag2==true && a<b && v[i].size()==m){
			if(v[i][a]==v[i][b]){
				flag2=true;
			}
			else{
				flag2=false;
			}
			a++;
			b--;
		}
		if(flag2==true && v[i].size()==m){
			med=v[i];
			sum+=m;
			break;
		}
	}
	cout<<sum<<endl;
	cout<<ss;
	cout<<med;
	reverse(ss.begin(),ss.end());
	cout<<ss;

		
	return 0;
}
