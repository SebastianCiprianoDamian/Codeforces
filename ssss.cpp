#include<bits/stdc++.h>
using namespace std;

int main(){
	int q,n,k,dat,piv;
	cin>>q;
	while(q--){
		vector <int> productos;
		cin>>n>>k;
		while(n--){
			cin>>dat;
			productos.push_back(dat);
		}
		sort(productos.begin(), productos.end());
		piv=abs(k-productos.back());
		productos.pop_back();
		if(piv>0){
			if(k>=abs(piv-productos.back())){
				cout<<piv<<endl;
		    }
		    else{
		    	cout<<"-1"<<endl;
			}
		}
		else{
			piv=productos[0]+k;
			if(k>=abs(piv-productos.back())){
				cout<<piv<<endl;
			}
			else{
				cout<<"-1"<<endl;
			}
		}
	}	
	return 0;
}
