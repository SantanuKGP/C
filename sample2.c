#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
	int i,n,*arr;
	scanf("%d",&n);
	//printf("%p\n",arr+1);
	for(i=0;i<n;i++)
		printf("%d : %p\n",i,(arr+i));
	arr++;
	*arr=n;
	arr--;
	printf("%p -> %d\n",arr,*(++arr));
	printf("%p -> %d\n",arr,*(arr));
	/*for(i=0;i<n;i++)
		scanf("%d",arr+i);*/
	/*for(i=0;i<n;i++)
		printf("%d",*(arr+i));*/
	return 0;
}

