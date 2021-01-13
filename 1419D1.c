#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
//#include<bits/stdc++.h>
using namespace std;
long long int find(long long int arr[],long long int n){
	long long int i,max=arr[0],ix=0;
	for(i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
			ix=i;
		}	
	}
	return ix;
}
int main(){
	long long int n,x,i;
	scanf("%lld",&n);
	printf("%lld\n",(n-1)/2);
	long long int arr[n],b[n];
	for(i=0;i<n;i++)
		scanf("%lld",&arr[i]);
	sort(arr, arr+n);
	/*for(i=n-1;i>=0;i=i-2){
		x=find(arr,n);
		b[i]=arr[x];
		arr[x]=0;
	}
	for(i=n-2;i>=0;i=i-2){
		x=find(arr,n);
		b[i]=arr[x];
		arr[x]=0;
	}*/
	for(i=0;i<n;i++)
		printf("%lld ",arr[i]);
	return 0;
}

