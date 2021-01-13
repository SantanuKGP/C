/*
Link :
Solution is given by Santanu Kundu
Dated on 02/12/2020
*/
#include<bits/stdc++.h>
using namespace std;
int check(int a[],int b[]){
	if (a[1]<b[0]) return 0;
	if (b[1]<a[0]) return 0;
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,j;
		cin>>n;
		int arr[n][2],adj[n][n]={0};
		for(i=0;i<n;i++)
			for(j=0;j<2;j++)
				cin>>arr[i][j];
		int max=0,sum,index=0,count=0;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(adj[j][i]){
					adj[i][j]=1;
					sum+=1;
					continue;
				}
				adj[i][j]=check(arr[i],arr[j]);
				sum+=adj[i][j];
			}
			if(sum>max){
				max=sum;
				index=i;
			}
			sum=0;
		}
		for(j=0;j<n;j++){
			if(adj[index][j]==0)
				count++;
		}
		cout<<count<<endl;
	}
	return 0;
}

