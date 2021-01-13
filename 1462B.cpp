/*
Link : https://codeforces.com/problemset/problem/1462/B
Solution is given by Santanu Kundu
Dated on 02/12/2020
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	char p;
	int i,n,t;
	cin>>t;
	while(t--){
		cin>>n;
		int pass=0;
		char arr[n];
		for(i=0;i<n;i++){
			cin>>arr[i];
		}
		if(arr[n-4]=='2' & arr[n-3]=='0' & arr[n-2]=='2' & arr[n-1]=='0') pass=1;
		if(arr[0]=='2' & arr[n-1]=='0' & arr[n-2]=='2' & arr[n-3]=='0') pass=1;
		if(arr[0]=='2' & arr[1]=='0' & arr[n-2]=='2' & arr[n-1]=='0') pass=1;
		if(arr[0]=='2' & arr[1]=='0' & arr[2]=='2' & arr[n-1]=='0') pass=1;
		if(arr[0]=='2' & arr[1]=='0' & arr[2]=='2' & arr[3]=='0') pass=1;
		if(pass)
			cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

