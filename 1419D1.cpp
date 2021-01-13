#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,t,i,count=0;
	scanf("%lld",&n);
	long long int arr[n],b[n];
	for(i=0;i<n;i++)
		scanf("%lld",&arr[i]);
	sort(arr, arr+n);
	t=0;
	for(i=1;i<n;i=i+2){
		b[i]=arr[t++];
	}
	for(i=0;i<n;i=i+2){
		b[i]=arr[t++];
	}
	for(i=1;i<n-1;i++){
		if((b[i]<b[i+1] ) & (b[i]<b[i-1]))
			count++;
	}
	printf("%lld\n",count);
	for(i=0;i<n;i++)
		printf("%lld ",b[i]);
	return 0;
}

