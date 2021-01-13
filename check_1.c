#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
	double d=21.997,t,arr[20];
	long int i=0,n;
	while(scanf("%lf",&t)==1){
		*(arr+i)=t;
		i++;
	}
	n=i;
	for(i=0;i<n;i++){
		printf("%lf  ",arr[i]);
	}
	return 0;
}

