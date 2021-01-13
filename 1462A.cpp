/*
Link : https://codeforces.com/problemset/problem/1462/A
Solution is given by Santanu Kundu
Dated on 02/12/2020
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,state=0;
		cin>>n;
		int arr[n],b[n],j=0,k=n-1;
		for(i=0;i<n;i++)
			cin>>arr[i];
		for(i=0;i<n;i++){
			if(!state){
				b[i]=arr[j++];
				state=1;	
			}
			else{
				b[i]=arr[k--];
				state=0;
			}
		}
		for(i=0;i<n;i++)
			cout<<b[i]<<" ";
		cout<<endl;
	}
	return 0;
}

