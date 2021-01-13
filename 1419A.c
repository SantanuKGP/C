#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int player1(int arr[],long int n,int status){
	long int i;
	if(status){
		for(i=0;i<n;i=i+2){
			if(arr[i]%2==0){
				arr[i]=-1;
				return 1;
			}}}
	for(i=0;i<n;i=i+2){
		if(arr[i]>0 & arr[i]%2==1){
			arr[i]=-1;
				break;
	}}
	return 0;
}
int player2(int arr[],long int n,int status){
	long int i;
	if(status){
		for(i=1;i<n;i=i+2){
			if(arr[i]>0 & arr[i]%2){
				arr[i]=-1;
				return 1;
			}}}
	for(i=1;i<n;i=i+2){
			if(arr[i]%2==0){
				arr[i]=-1;
				break;
			}}
	return 0;
}
int main(){
	long int t,n,count1,count2,i,round;
	int status1,status2;
	scanf("%ld",&t);
	while(t--){
		count1= 0,count2=0,status1=1,status2=1;
		scanf("%ld",&n);
		if(n==1){
			scanf("%ld",&n);
		if(n%2)
		 printf("1\n");
		else printf("2\n");
		continue;
		}
		char s[n+1];
		int arr[n];
		scanf("%s",s);
		for(i=0;i<n;i++){
			arr[i]=s[i]-'0';
		}
		round=(n-1)/2;
		while(round--){
			status1=player1(arr,n,status1);
			status2=player2(arr,n,status2);			
		}
		if(n%2==0) player1(arr,n,status1);
		for(i=0;i<n;i++){
			//printf("%d ",arr[i]);
			if(arr[i]>=0)
				break;
		}
		if(arr[i]%2) printf("Winner : 1\n");
		else printf("Winner : 2\n");
		
	}
	return 0;
}

