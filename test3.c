#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int prob(int arr[],int n,int sum,int hash[]){
	int i,j,k=0,p[n*(n-1)/2];
	if(n==0) return 0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]+arr[j]<= sum){
				p[k++]=arr[i]+arr[j];
				hash[p[k-1]]+=1;
			}
		}
	}
	prob(p,k,sum,hash);
}
int main(){
	int i,j,n,sum,temp,count=0;
	scanf("%d",&n);
	int arr[n],brr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	scanf("%d",&sum);
	int hash[sum+1];
	for(i=0;i<=sum;i++)
		hash[i]=0;
	prob(arr,n,sum,hash);
	for(i=0;i<=sum/2;i++){
			count+=hash[i]*hash[sum-i];
	}
	/*for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}*/
	/*for(i=0;i<n;i++)
		printf("%d",arr[i]);*/
	printf("Total ways : %d + %d",count,hash[sum]);
	return 0;
}

