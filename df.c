#include<stdio.h>
int main(){
	int i,n;
	scanf("%d",&n);
	int arr[n+1],index=0,j=0;
	double avg[n+1],t,max=0;
	arr[0]=avg[0]=0;
	for(i=1;i<=n;i++){
		scanf("%d",&arr[i]);
		avg[i]=(double)arr[i]/i;
	}
	for(i=0;i<=n/2;i++){
		t=avg[i]+avg[n-i];
		if(max<t){
			index=i;
			max=t;
		}
	}
	for(i=1;i<=n;i++){
		printf("%lf ",avg[i]);
	}
	int weight1=n/index,weight2=n%index;
	printf("\n%d",weight1*arr[index]+arr[weight2]);
	return 0;
}
