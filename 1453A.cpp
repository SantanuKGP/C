/*
Link :
Solution is given by Santanu Kundu
Dated on 02/12/2020
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,m,i;
	cin>>t;
	while(t--){
		cin>>n>>m;
		int p,h[101]={0},count=0;
		for(i=0;i<n;i++){
			cin>>p;
			h[p]=1;
		}
		for(i=0;i<m;i++){
			cin>>p;
			if(h[p])
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}

