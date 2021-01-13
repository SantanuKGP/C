#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,m,n;
	scanf("%d %d",&m,&n);
	int** ptr= (int**) malloc(m*sizeof(int*));
	for(i=0;i<m;i++)
		ptr[i]= (int)malloc(n*sizeof(int));
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			scanf("%d",&ptr[i][j]);//*(ptr+i)+j
	}
	for(i=0;i<m;i++){
		printf("\n");
		for(j=0;j<n;j++)
			printf("%d ",*(*(ptr+i)+j));
	}
	for(i=0;i<m;i++)
		free(ptr[i]);
	free(ptr);
	return 0;
}
