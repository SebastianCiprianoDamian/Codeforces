#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	long long int mx=0,mul=0,sum=0;
	cin>>n>>k;
	pair<int,int> p[n];
	
	for(int i=0; i<n ;i++){
		cin>>p[i].second>>p[i].first;
	}
	
	sort(p,p+n);
	
	set<pair<int,int>>l;
	
	for(int i=n-1; i>=0 ;i--){
		l.insert(make_pair(p[i].second,i));
		sum+=p[i].second;
		if(l.size()>k){
			sum-=l.begin()->first;
			l.erase(l.begin());
		}
		mul=sum*p[i].first;
		mx=max(mx,mul);
	}
	
	cout<<mx<<endl;
	
	return 0;
}
