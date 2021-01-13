#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
// This algorithm is valid for only array of positive numbers
int key=1;
int search(int arr[],int size, int a){
	int i;
	//printf("# ");
	for (i=0;i<size;i++){
		if(arr[i]==a)
			return 0;    //if found
	}
	return 1;
}
void print(int arr[],int n){
	int i;
	printf("\nFinal Array : ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int sub(int arr[],int n,int brr[],int b, int sum,int index){
	int i;
	//printf("index :%d ->",index);
	for(i=index;i<n;i++){
		if(arr[i]>sum)
			continue;
		if(arr[i]==sum){
			brr[b++]=arr[i];
			if(key){
				print(brr,b);
				key=0;
			}
			sub(arr,n,brr,b,0,i+1);	
			return 1;
			
		}
		if(arr[i]<sum){
			brr[b++]=arr[i];
			sum=sum-arr[i];
			sub(arr,n,brr,b,sum,i+1);
		}
		
	}
	return 0;
}
int main(){
	int i,j,temp,n,sum;
	scanf("%d",&n);
	int arr[n],brr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	scanf("%d",&sum);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	key=sum;
	int count=0;
	for(i=0;i<n;i++){
		key=1;
		count+=sub(arr,n,brr,0,sum,i);
	}
	count+=sub(arr,n,brr,0,0,i);	
	printf("Total ways : %d",count);
	return 0;
}
// 8 3 4 -7 1 3 3 1 -4 7
