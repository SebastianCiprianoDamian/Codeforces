#include<bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin>>n;
	while(n--){
		long int m,x;
		vector<int> v;
		cin>>m;
		x=m;
		
		for(int i=2; i<=sqrt(m)+1 ; i++){
			
			if(x%i==0){
					
				if(v.size()<2){
					
					x/=i;
					v.push_back(i);
						
				}
				else{
					
					exit;
					
				}
				
			}
			else{
				if(v.size()==2)
				if(x!=v[0] && x!=v[1]){
					
					v.push_back(x);
						
				}
					
				exit;
					
				}
			
		}
		
		if(v.size()==3){
			
			cout<<"YES"<<endl;
			cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
			
		}
		else{
			
			cout<<"NO"<<endl;
			
		}
			
	}
	
	return 0;
}
