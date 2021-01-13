/*
Link :
Solution is given by Santanu Kundu
Dated on 02/12/2020
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n],k=n,i,sum=0;
		for(i=0;i<n;i++){
			cin>>arr[i];
			sum+=arr[i];
		}
		while(k){
			if(sum%k){
				k--;
				continue;
			}
			int d=sum/k,sum1=0,p=0;
			for(i=0;i<n;i++){
				sum1+=arr[i];
				if(sum1==d){
					sum1=0;
					p++;
				}
				if(sum1>d)
					break;
			}
			if(p==k){
				cout<<n-k<<endl;
				break;
			}
			k--;
		}
	}
	return 0;
}

