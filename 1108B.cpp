#include<bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,dat,x,y=0;
	cin>>n;
	vector <int> v;
	for(int i=0;i<n;i++){
		cin>>dat;
		v.push_back(dat);
	}
	
	sort(v.rbegin(),v.rend());
	
	x=v[0];
	if(x==v[1]){
		y=v[1];
	}
	else{
		for(int i=0; i<n-1; i++){
			if(v[i+1]==v[i+2]){
				y=v[i+1];
				break;
			}
			else{
				if(x%v[i+1]!=0){
				y=v[i+1];
				break;
				}
			}
		}
	}
	if(y==0){
		y=v[1];
	}
	cout<<x<<" "<<y<<endl;

	
	return 0;
}
