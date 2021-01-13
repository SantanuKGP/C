#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
	int n,i,d,*arr;
	scanf("%d",&n);
	d=n;
	arr=(int *) malloc(n*sizeof(int));
	while(n--){
		scanf("%d",(arr+n));
	}
	for(i=0;i<d;i++){
		printf("%d ",*(arr++));
	}
	return 0;
}

