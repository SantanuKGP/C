/*
Link : https://codeforces.com/problemset/problem/1455/D
Solution is given by Santanu Kundu
Dated on 02/12/2020
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,x;
	cin>>t;
	while(t--){
		cin>>n>>x;
		int arr[n];
		int state=1;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			// lock key model to find the state
			if(i>0 & state){
				state=(arr[i]>=arr[i-1]);
			}
		}
			
		if(n==1 |state){
			cout<<"0"<<endl;
			continue;
		}
		int b[n],j=0,size,temp,count=0;//size is len(b)
		for(int i=0;i<n-1;i++){
			if(arr[i]>arr[i+1]){
				b[j++]=i;
			}
		}
		size=j;
		/*
		for(int i=0;i<size;i++)
			cout<<b[i]<<' ';
		*/
		for(int i=0;i<n;i++){
			if(arr[i]>x & i<=b[j-1]){
				temp=x;
				x=arr[i];
				arr[i]=temp;
				count++;	
			}
		}
		state=1;
		for(j=0;j<size;j++){
			if(b[j]>0){
				state*=(arr[b[j]-1]<=arr[b[j]])*(arr[b[j]]<=arr[b[j]+1]);
			}
			else state*=(arr[b[j]]<=arr[b[j]+1]);
		}
		if(state)
			cout<<count<<endl;
		else cout<<"-1"<<endl;
	}
	return 0;
}
/*
Test module 1:
1
38 1
5 2 4 4 4 5 29 6 6 7 8 8 8 10 11 13 14 15 16 17 21 23 23 24 24 24 25 27 375 30 31 32 32 32 33 35 37 37

*/
