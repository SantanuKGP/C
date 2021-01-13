#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int key;
int search(int arr[],int size, int a){
	int i;
	printf("# ");
	for (i=0;i<size;i++){
		if(arr[i]==a)
			return 0;    //if found
	}
	return 1;
}
void print(int arr[],int n){
	int i;
	printf("Final Array : ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int find(int arr[],int size,int sum,int index){
	if(sum==0)
		return 1;
	if(sum<0)
		return 0;
	for(int i=index;i<size;i++){
		if(arr[i]<=sum){
			printf("Before return %d\n",i);
			if(find(arr,size,sum-arr[index],index+1))//return find(arr,size,sum-arr[index],index+1);
				return 1;
			printf("After return %d\n",i);
		}
	}
}
int main(){
	int i,n,sum;
	scanf("%d",&n);
	int arr[n],brr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	scanf("%d",&sum);
	key=sum;
	int count=0;
	//count=find(arr,n,sum,0);
	for(i=0;i<n;i++){
		count+=find(arr,n,sum,i);
		printf("%d ",count);
	}
	printf("Total ways : %d",count);
	return 0;
}

